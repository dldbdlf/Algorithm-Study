#include <stdio.h>

int main() {
    int size;
    int sequence;
    scanf("%d %d", &size, &sequence);
    int blocks[size];
    for(int i =0; i < size; ++i)
    {
        blocks[i] =0;
    }
    for(int i =0; i< sequence; ++i)
    {
        int start, end; 
        scanf("%d %d",&start, &end);
        for(int j = start; j < end+1; ++j)
        {
            blocks[j-1] += 1;
        }
    }
    int max =0;
    for(int i =0; i < size; ++i)
    {
        if(blocks[i] > max)
        {
            max = blocks[i];
        }
    }
    printf("%d",max);
    return 0;
}