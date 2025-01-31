#include <stdio.h>
#include <string.h>
struct move
{
    int v;
    int t;
};

int main() {
    int N,M;
    scanf("%d %d",&N,&M);
    struct move a_move[N];
    struct move b_move[M];
    int time = 0;
    for(int i =0; i < N; ++i)
    {
        scanf("%d %d",&a_move[i].v, &a_move[i].t);
        time += a_move[i].t;
    }
    for(int i =0; i <M; ++i)
    {
        scanf("%d %d",&b_move[i].v, &b_move[i].t);
    }
    int a[time +1];
    int b[time +1];
    memset(a,0 , sizeof(a));
    memset(b, 0 ,sizeof(b));
    int start_time = 0;
    int start_distance =0;
    for(int i =0; i < N; ++i)
    {
        for(int j = start_time +1; j <= start_time + a_move[i].t; ++j)
        {
            start_distance += a_move[i].v;
            a[j] = start_distance;
        }
        start_time += a_move[i].t;
    }
    start_time =0;
    start_distance =0;
    for(int i =0; i < M; ++i)
    {
        for(int j = start_time +1; j <= start_time + b_move[i].t; ++j)
        {
            start_distance += b_move[i].v;
            b[j] = start_distance;
        }
        start_time += b_move[i].t;
    }
    int before = 0;
    int result = 0;
    for(int i =1; i < time +1; ++i)
    {
        if(a[i] == b[i] && before != 0)
        {
            result += 1;
            before = 0;
        }
        if(a[i] > b[i] && before != 1)
        {
            result += 1;
            before = 1;
        }
        if(a[i] < b[i] && before != -1)
        {
            result += 1;
            before = -1;
        }
    }
    printf("%d", result);

    return 0;
}