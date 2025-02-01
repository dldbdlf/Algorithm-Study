#include <stdio.h>
#include <string.h>
int main() {
    int N,M;
    scanf("%d %d",&N, &M);
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    int index =0;
    int x = 0;
    int y = 0;
    int numbers[N][M];
    memset(numbers,0,sizeof(numbers));
    int start =1;
    while(start <= (N*M))
    {
        numbers[x][y] = start;
        x += dx[index];
        y += dy[index];
        if(x < 0 || x >= N || y >= M || y <0 || numbers[x][y] != 0)
        {
            index += 2;
            index %= 4;
            x += dx[index];
            y += dy[index];
            index += 3;
            index %= 4;
            x += dx[index];
            y += dy[index];           
        }
        start += 1;
    }
    for(int i  =0; i < N; ++i)
    {
        for(int j =0; j < M; ++j)
        {
            printf("%d ",numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}