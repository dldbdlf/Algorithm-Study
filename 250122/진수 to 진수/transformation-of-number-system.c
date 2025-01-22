#include <stdio.h>
#include <math.h>
int a_to_ten(int a, int number)
{
    int result =0;
    int idx =0;
    while(number > 0)
    {
        result += (pow(a,idx) * (number % 10));
        number /= 10;
        idx += 1;
    }
    return result;
}
int main() {
    int a,b ;
    int num;
    scanf("%d %d", &a, &b);
    scanf("%d",&num);
    int result = a_to_ten(a,num);
    int final[40];
    int i =0;
    while (result > 0)
    {
        final[i] = result % b;
        i +=1; 
        result /= b;
    }
    for(int j = i -1; j >=0; --j)
    {
        printf("%d",final[j]);
    }

    return 0;
}