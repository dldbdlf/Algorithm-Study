#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    int cows[number];
    for(int i =0; i < number; ++i)
    {
        scanf("%d",&cows[i]);
    }
    int result = 0;
    for(int i =0; i < number -2 ; ++i)
    {
        int first = cows[i];
        for(int j = i+1; j < number -1; ++j)
        {
            if(cows[j] >= first)
            {
                int second = cows[j];
                for(int z = j+1; z< number; ++z)
                {
                    if(cows[z] >= second)
                    {
                        result += 1;
                    }
                }
            }
        }
    }
    printf("%d", result);
    return 0;
}