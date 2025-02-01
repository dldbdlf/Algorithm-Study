#include <stdio.h>
#include <string.h>
int main() {
    int N,M;
    scanf("%d %d",&N, &M);
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    int numbers[N+2][N+2];
    memset(numbers, 0, sizeof(numbers));
    for(int i =0; i < M; ++i )
    {
        int x, y;
        scanf("%d %d", &x, &y);
        int cnt =0;
        int result = 0;
        numbers[x][y] = 1;
        for(int j = 0; j < 4; ++j)
        {
            if(numbers[x + dx[j]][y + dy[j]] == 1)
            {
                cnt += 1;
            }
        }
        if(cnt == 3)
        {
            result = 1;
        }
        printf("%d\n",result);
    }


    return 0;
}