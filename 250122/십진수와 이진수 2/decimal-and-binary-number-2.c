#include <stdio.h>
#include <math.h>

int two_to_ten(int second)
{
    int result =0;
    int i =0;
    while(second >0)
    {
        result += (pow(2,i) * (second % 10));
        second /= 10;
        i +=1;
    }
    return result;
}
int main() {
    int number;
    scanf("%d",&number);
    int result = two_to_ten(number);
    result *= 17;
    int final[20];
    int i =0;
    while(result > 0)
    {
        final[i] = result %2;
        result /= 2;
        i += 1;
    }
    for (int j = i -1; j >= 0; --j)
    {
        printf("%d",final[j]);
    }
    return 0;
}