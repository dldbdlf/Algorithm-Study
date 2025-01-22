#include <stdio.h>
#include <math.h>
int main() {
    int second;
    scanf("%d",&second);
    int result =0;
    int i =0;
    while(second > 0)
    {
        result += (pow(2,i) *(second %10));
        i += 1;
        second /= 10;        
    }
    printf("%d", result);

    return 0;
}