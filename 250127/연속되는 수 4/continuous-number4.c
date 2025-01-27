#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);
    int before = 1001;
    int cnt =1;
    int max =1;
    for(int i =0; i < size; ++i)
    {
        int number;
        scanf("%d",&number);
        if (before < number)
        {
            cnt += 1;
        }
        else 
        {
            if(cnt  > max)
            {
                max = cnt;
            }
            cnt = 1;
        }
        before = number;
        if(i == (size -1) && max < cnt)
        {
            max = cnt;
        }

    }
    printf("%d",max);
    return 0;
}