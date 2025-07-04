#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int max;
    int result;
    if(n <m)
    {
        max =m;
    }
    else
    {
        max =n;
    }
    while(1)
    {
        if(max % n == 0 && max %m ==0)
        {
            result = max;
            break;
        }
        max++;
    }
    printf("%d",result);
    
    return 0;
}