#include <stdio.h>
#include <string.h>
int main() {
    int numbers[201][201];
    memset(numbers, 0x00, sizeof(numbers));
    int number;
    scanf("%d",&number);
    for(int i =0; i < number; ++i)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        for(int j = x; j < x+8; ++j)
        {
            for(int z = y; z < y+8; ++z)
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
            if(numbers[i][j] ==1)
            {
                result += 1;
            } 
        }
    }
    printf("%d", result);
    return 0;
}