#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int numbers[n][n];
    for(int i =0; i < n; ++i)
    {
        for(int j =0; j <n; ++j)
        {
            scanf("%d",&numbers[i][j]);
        }
    }
    int result =0;
    for(int i = 0; i < n; ++i)
    {
        for(int j =0; j < n - 2; ++j)
        {
            int cnt =0;
            for(int z =0; z < 3; ++z)
            {
                if(numbers[i][j +z] == 1)
                {
                    cnt += 1;
                }
                
            }
            if (cnt > result)
            {
                result = cnt;
            }  
        }
    }    
    printf("%d", result);
    return 0;
}