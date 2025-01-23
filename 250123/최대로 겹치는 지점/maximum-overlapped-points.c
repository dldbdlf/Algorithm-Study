#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    int numbers[101];
    for(int i =0; i < 102; ++i)
    {
      numbers[i] = 0;
    }
    for(int i =0; i < number; ++i)
    {
      int start,end;
      scanf("%d %d",&start,&end);
      for(int j = start; j <= end; ++j)
      {
        numbers[j] += 1;
      }
    }
    int max =0;
    for(int i =0 ; i < 101; ++i)
    {
      if(numbers[i]  > max)
      {
        max = numbers[i];
      }
    }
    printf("%d",max);
    return 0;
}