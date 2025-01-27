#include <stdio.h>
struct move{
    int v;
    int t;
};

int main() {
    int N,M;
    scanf("%d %d",&N, &M);
    struct move A[N];
    struct move B[M];
    int total_time = 0;
    for(int i = 0; i < N; ++i)
    {
        scanf("%d %d", &A[i].v,&A[i].t);
        total_time += A[i].t;
    }
    for(int i =0; i < M; ++i)
    {
        scanf("%d %d", &B[i].v, &B[i].t);
    }
    int distance_A[total_time +1];
    int distance_B[total_time +1];
    int start_A =0;
    int start_B =0;
    int start_time =0;
    for(int i =0; i < N; ++i)
    {
        for(int j =start_time +1; j <= start_time +A[i].t; ++j)
        {
            start_A += A[i].v;
            distance_A[j] =start_A; 
        }
        start_time += A[i].t;
    }
    start_time =0;
    for(int i =0; i < M; ++i)
    {
        for(int j =start_time +1 ; j <= start_time +B[i].t; ++j)
        {
            start_B += B[i].v;
            distance_B[j] =start_B; 
        }
        start_time += B[i].t;
    }  
    int cnt =0;
    int before =0;
    for(int i =1; i < total_time+1; ++i)
    {
      if(before == 0)
      {
        if(distance_A[i] > distance_B[i])
        {
            before =1;
        }
        else if(distance_A[i] < distance_B[i])
        {
            before = -1;
        }
      }
      else if(before == 1)
      {
        if(distance_A[i] < distance_B[i])
        {
            before = -1;
            cnt += 1;
        }
      }
      else
      {
        if(distance_A[i] > distance_B[i])
        {
            before = 1;
            cnt +=1;
        }

      }

    }
    printf("%d", cnt);

    return 0;
}