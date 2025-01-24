#include <stdio.h>

int main() {
    int numbers[200001];
    int first = 100000;
    int number ;
    scanf("%d",&number);
    for(int i =0; i< 200001; ++i)
    {
        numbers[i] =0;
    }
    for(int i =0 ; i < number; ++i)
    {
        int size;
        char direction;
        scanf("%d %c",&size, &direction);
        if(direction == 'R')
        {
            for(int j = first; j < first +size; ++j)
            {
                numbers[j] = 1;
            }
            first += (size -1);
        }
        else
        {
            for(int j = first; j > first - size; --j)
            {
                numbers[j] = -1;

            }
            first -= (size -1);
        }

    }
    int white_cnt =0;
    int black_cnt =0;
    for(int i =0; i < 200001; ++i)
    {
        if(numbers[i] == 1)
        {
            black_cnt += 1;
        }
        else if(numbers[i] == -1)
        {
            white_cnt += 1;
        }
    }
    printf("%d %d",white_cnt, black_cnt);
    return 0;
}