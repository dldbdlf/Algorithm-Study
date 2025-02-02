#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int num;
    scanf("%d", &num);
    int numbers[num];
    memset(numbers , 0, sizeof(numbers));
    for(int i =0; i < num; ++i)
    {
        scanf("%d", &numbers[i]);
    }
    int result;
    for(int i =0; i <num; ++i)
    {
        int distance = 0;
        for(int j =0; j <num; ++j)
        {
            distance += abs(i - j) * numbers[j];
        }
        if(i == 0)
        {
            result = distance;
        }
        else if(result > distance)
        {
            result = distance;
        }
    }
    printf("%d", result);


    return 0;
}