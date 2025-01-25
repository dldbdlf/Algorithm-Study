#include <stdio.h>
#include<string.h>
int main() {
    int number;
    scanf("%d",&number);
    int numbers[201][201];
    memset(numbers, 0x00, sizeof(numbers));

    for(int i =0; i <number; ++i)
    {
        int x1,y1,x2,y2;
        scanf("%d %d %d %d",&x1, &y1, &x2, &y2);
        for(int j = x1;  j < x2; ++j)
        {
            for(int z = y1; z < y2; ++z )
            {
                numbers[j+100][z+100] = 1;
            }
        }
    }
    int result =0;
    for(int i =0; i < 201; ++i)
    {
        for(int j =0; j < 201; ++j)
        {
            if(numbers[i][j]  == 1)
            {
                result += 1;
            }
        }
    }
    printf("%d", result);

    return 0;
}