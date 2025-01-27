#include <stdio.h>
#include <string.h>

int main() {
    int N,M,K;
    scanf("%d %d %d",&N, &M, &K);
    int numbers[N +1];
    memset(numbers,0,sizeof(numbers));
    int result = -1;
    for(int i =0; i < M; ++i)
    {
        int index; 
        scanf("%d",&index);
        numbers[index] += 1;
        if(result != -1)
        {
            continue;
        }
        if(numbers[index] >= K)
        {
            result = index;
        }

    }
    printf("%d", result);
    return 0;
}