#include <stdio.h>
#include <string.h>
int main() {
    int number;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    scanf("%d",&number);
    int numbers[number+2][number+2];
    memset(numbers , 0,  sizeof(numbers));
    for(int i = 1; i <=  number; ++i)
    {
        for(int j =1; j <= number; ++j)
        {
            scanf("%d", &numbers[i][j]);
        }
    }
    int result =0;
    for(int i = 1; i <= number ; ++i)
    {
        for(int j =1; j <= number ; ++j)
        {
            int cnt = 0;
            for(int z = 0; z < 4; ++z)
            {
                if(numbers[i+ dx[z]][j + dy[z]] == 1)
                {
                    cnt += 1;
                } 

            }
            if(cnt >= 3)
            {
                result += 1;
            }
        }

    }
    printf("%d", result);
    return 0;
}