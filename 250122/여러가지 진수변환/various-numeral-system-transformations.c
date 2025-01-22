#include <stdio.h>

int main() {
    int num;
    int B;
    scanf("%d %d",&num, &B);
    int result[10];
    int idx =0;
    while (num > 0)
    {
        result[idx] =num % B;
        idx += 1;
        num /= B; 
    }
    for(int j = idx -1; j >= 0; --j)
    {
        printf("%d",result[j]);
    }

    return 0;
}