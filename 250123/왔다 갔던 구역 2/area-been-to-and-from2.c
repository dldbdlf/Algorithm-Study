#include <stdio.h>

int main() {
    int number;
    scanf("%d",&number);
    int numbers[2001];
    for(int i =0; i < 2001; ++i)
    {
        numbers[i] = 0;
    }
    int first =0;
    for(int i =0; i < number; ++i)
    {
        int size;
        char direction;
        scanf("%d %c",&size, &direction);
        if(direction == 'R')
        {
            for(int j = first; j < first +size; ++j)
            {
                numbers[j+1000] += 1;

            }
            first += size;   
        }
        else
        {
            for(int j = first-1 ; j >=first - size; --j )
            {
                numbers[j+1000] += 1;
            }
            first -= size;

        } 
    }
    int result =0;
    for(int i =0; i < 2001; ++i)
    {
        if(numbers[i] >= 2)
        {
            result +=1;
        }
    }
    printf("%d", result);
    return 0;
}