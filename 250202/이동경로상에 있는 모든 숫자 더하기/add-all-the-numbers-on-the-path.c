#include <stdio.h>
#include <string.h>
int main() {
    int N,T;
    scanf("%d %d",&N, &T);
    char order[T];
    scanf("%s",order);
    int numbers[N][N];
    for(int i =0; i <N; ++i)
    {
        for(int j =0; j <N; ++j)
        {
            scanf("%d", &numbers[i][j]);
        }
    }
    int dx[4] ={-1,0,1,0};
    int dy[4] ={0,1,0, -1};
    int index =0 ;
    int x = N / 2;
    int y = N / 2;
    int result = numbers[x][y];
    for(int i =0; i <T; ++i)
    {
        if(order[i] == 'R')
        {
            index += 1;
            index %= 4;
        }
        else if (order[i] == 'L')
        {
            index += 3;
            index %= 4;
        }
        else if(order[i] == 'F')
        {
            x += dx[index];
            y += dy[index];
            if(x < 0 || x >= N || y < 0 || y >= N)
            {
                int tmp = (index +2) % 4;
                x += dx[tmp];
                y += dy[tmp];
            }
            else
            {
                result += numbers[x][y];
            }
        }
    }
    printf("%d", result);

    
    return 0;
}