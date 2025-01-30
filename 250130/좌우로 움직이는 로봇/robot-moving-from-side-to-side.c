#include <stdio.h>
struct move
{
    int size;
    char direction;
};

int main() {
    int n,m;
    scanf("%d %d",&n, &m);
    struct move A[n];
    struct move B[m];
    int time_a =0;
    int time_b =0;
    for(int i =0; i < n; ++i)
    {
        scanf("%d %c", &A[i].size, &A[i].direction);
        time_a += A[i].size;
    }
    for(int i =0; i < m; ++i)
    {
        scanf("%d %c", &B[i].size, &B[i].direction);
        time_b += B[i].size;
    }
    int min_time = time_a;
    int max_time = time_b;
    if(time_a > time_b)
    {
        min_time = time_b;
        max_time = time_a;
    }
    int a_distance[max_time+1];
    int b_distance[max_time+1];
    int start_distance =0;
    int start_time =0;
    for(int i =0; i < n; ++i)
    {
        if(A[i].direction == 'R')
        {
            for(int j = start_time +1; j <= start_time + A[i].size; ++j)
            {
                start_distance += 1;
                a_distance[j] = start_distance;
            }
        }
        else
        {
            for(int j = start_time +1; j <= start_time +A[i].size; ++j)
            {
                start_distance -= 1;
                a_distance[j] = start_distance;
            }
        }
        start_time += A[i].size;
    }
    if(time_a != max_time)
    {
        for(int i = time_a ; i <= max_time; ++i)
        {
            a_distance[i]  = start_distance;
        }
    }
    start_distance =0;
    start_time =0;
    for(int i =0; i < m; ++i)
    {
        if(B[i].direction == 'R')
        {
            for(int j = start_time +1; j <= start_time + B[i].size; ++j)
            {
                start_distance += 1;
                b_distance[j] = start_distance;
            }
        }
        else
        {
            for(int j = start_time +1; j <= start_time +B[i].size; ++j)
            {
                start_distance -= 1;
                b_distance[j] = start_distance;
            }
        }
        start_time += B[i].size;
    }
    if(time_b != max_time)
    {
        for(int i = time_b ; i <= max_time; ++i)
        {
            b_distance[i]  = start_distance;
        }
    }
    int before =0;
    int result =0;
    for(int i =1 ; i < max_time +1; ++i)
    {
        if(a_distance[i] == b_distance[i])
        {
            if(before == 0)
            {
                before = 1;
                result += 1;
            }

        }
        else
        {
            before = 0;
        }

    }    
    printf("%d", result);
    

    return 0;
}