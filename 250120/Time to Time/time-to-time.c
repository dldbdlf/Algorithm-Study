#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int result;
    result= (c-a) *60 +(d-b);
    printf("%d",result);
    return 0;
}