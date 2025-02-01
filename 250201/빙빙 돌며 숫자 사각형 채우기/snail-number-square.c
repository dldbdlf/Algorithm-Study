#include <stdio.h>
#include <string.h>
int main() {
    int N,M;
    scanf("%d %d",&N,&M);
    int numbers[N][M];
    memset(numbers, 0 , sizeof(numbers));
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int x = 0;
    int y =0;
    int start =1;
    int index =0;
    while(start <= (N*M))
    {
        numbers[x][y] = start;
        x += dx[index];
        y += dy[index];
        if(x < 0 || y < 0 || x >=N || y >= M || numbers[x][y] != 0)
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
    for(int i =0; i < N; ++i)
    {
        for(int j =0; j <M ; ++j)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    return 0;
}