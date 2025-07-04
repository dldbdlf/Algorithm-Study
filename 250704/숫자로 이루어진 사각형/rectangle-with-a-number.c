#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int M[9]= {1,2,3,4,5,6,7,8,9};
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("%d",M[(N*i + j) % 9]);
            printf(" ");
        }
        printf("\n");

    }
    return 0;
}