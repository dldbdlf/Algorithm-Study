#include <stdio.h>
#include <string.h>
struct direction{
    char way;
    int size;
};

int main() {
    int dir_a, dir_b;
    scanf("%d %d",&dir_a, &dir_b);
    struct direction a[dir_a];
    struct direction b[dir_b];
    int time =0;
    for(int i =0; i < dir_a; ++i)
    {
        scanf(" %c",&a[i].way);
        scanf("%d",&a[i].size);
        time += a[i].size;
    }
    for(int i =0; i < dir_b; ++i)
    {
        scanf(" %c",&b[i].way);
        scanf("%d",&b[i].size);
    }
    int time_a[time+1];
    int time_b[time+1];
    memset(time_a , 0, sizeof(time_a));
    memset(time_b, 0, sizeof(time_b));
    int start_time =0;
    int start =0;
    for(int i =0; i < dir_a; ++i)
    {
        if(a[i].way == 'R')
        {
            for(int j =start_time +1; j <= start_time +a[i].size; ++j)
            {
                start += 1;
                time_a[j] = start;
            }
            start_time += a[i].size;
        }
        else{
            for(int j = start_time +1; j <= start_time +a[i].size; ++j)
            {
                start -= 1;
                time_a[j] = start;
            }
            start_time += a[i].size;
        }
    }
    start =0;
    start_time =0;
    for(int i =0; i < dir_b; ++i)
    {
        if(b[i].way == 'R')
        {
            for(int j =start_time +1; j <= start_time+ b[i].size; ++j)
            {
                start += 1;
                time_b[j] = start;
            }
            start_time += b[i].size;
        }
        else{
            for(int j = start_time +1; j <= start_time +b[i].size; ++j)
            {
                start -= 1;
                time_b[j] = start;
            }
            start_time += b[i].size;
        }
    }
    int result = -1;
    for(int i =1; i < time +1; ++i)
    {
        if(time_a[i] ==time_b[i])
        {
            result =i;
            break;
        } 
    }
    printf("%d",result);



    return 0;
}