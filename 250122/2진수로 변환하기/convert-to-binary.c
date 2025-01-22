#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    int result[20];
    int i =0; 
    while(number > 0)
    {
        result[i]= number %2;
        number /= 2;
        i += 1;

    }
    
    for(int j =i-1; j  >= 0; --j)
    {
        printf("%d",result[j]);
    }
    return 0;
}