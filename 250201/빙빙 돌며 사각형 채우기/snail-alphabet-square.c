#include <stdio.h>
#include <string.h>
char Alphabet[26] ={'A','B','C','D','E','F','G','H','I', 'J','K', 'L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int main() {
    int N,M;
    scanf("%d %d",&N, &M);
    char rotates[N][M];
    memset(rotates, '0', sizeof(rotates));
    int dx[4] ={0, 1, 0, -1};
    int dy[4] ={1, 0 ,-1, 0};
    int index =0;
    int x =0;
    int y =0;
    int start =0;
    while(start < (N*M))
    {
        rotates[x][y] = Alphabet[start % 26];
        x += dx[index];
        y += dy[index];
        if(x < 0 || y < 0 || x >= N || y >= M || rotates[x][y] != '0')
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
        for(int j =0; j <M; ++j)
        {
            printf("%c ", rotates[i][j]);
        }
        printf("\n");
    }
    return 0;
}