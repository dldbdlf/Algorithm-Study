#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    int numbers[200001];
    int black[200001];
    int white[200001];
    for(int i =0; i< 200001; ++i)
    {
        numbers[i] = 0;
        black[i] = 0;
        white[i] = 0;
    }
    int first = 100000;
    for(int i =0; i < number; ++i)
    {
        int size;
        char direction;
        scanf("%d %c",&size, &direction);
        if(direction == 'R')
        {
            for(int j = first; j < first + size; ++j)
            {
                numbers[j] = 1;
                black [j] += 1;
            }
            first += (size-1);
        }
        else
        {
            for(int j = first; j > first -size; --j)
            {
                numbers[j] = -1;
                white[j] += 1;
            }
            first -= (size-1);
        }
    }
    int white_cnt =0;
    int black_cnt =0;
    int grey_cnt =0;
  
    for(int i =0; i < 200001; ++i)
    {
        if(white[i] >= 2 && black[i] >= 2)
        {
            grey_cnt += 1;
        }
        else if(numbers[i] == -1)
        {
            white_cnt +=1;
        }
        else if(numbers[i] == 1)
        {
            black_cnt +=1 ;
        }
    }
    printf("%d %d %d",white_cnt, black_cnt, grey_cnt);

    return 0;
}