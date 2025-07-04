#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int min;
    int result;

    if(n < m)
    {
        min = n;
    }
    else
    {
        min = m;
    }

    for(int i = min; i >=2; --i)
    {
        if(n % i ==0 && m % i ==0)
        {
            result =i;
            break;
        }
    }
    printf("%d",result);
    
    return 0;
}