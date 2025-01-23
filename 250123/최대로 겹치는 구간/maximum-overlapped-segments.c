#include <stdio.h>

int main() {
    int number;
    scanf("%d",&number);
    int numbers[200];
    for(int i =0; i < 200;++i)
    {
        numbers[i]=0;
    }
    for(int i = 0; i < number; ++i)
    {
        int start, end;
        scanf("%d %d",&start, &end);
        for(int j = start +100;j <= end+100; ++j)
        {
            numbers[j] += 1;
        }
    }
    int max =0;
    int idx =0;
    for(int i =0; i< 200; ++i)
    {
      if(numbers[i] > max)
      {
        idx =i;
        max = numbers[i];
      }  
    }

    if(numbers[idx] == numbers[idx +1])
    {
        printf("%d", max);
    }
    else
    {
        printf("%d", max -1);
    }


    return 0;
}