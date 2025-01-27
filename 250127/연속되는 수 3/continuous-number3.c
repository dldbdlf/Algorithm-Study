#include <stdio.h>
int main() {
    int number;
    scanf("%d", &number);
    int minus_idx =1;
    int plus_idx = 1;
    int before =0;
    int max =1;
    for(int i =0; i < number; ++i)
    {
        int num;
        scanf("%d",&num);
        if(num > 0)
        {
            if(before > 0)
            {
                plus_idx += 1;
            }
            else
            {
                if(max < minus_idx)
                {
                    max = minus_idx;
                }
                minus_idx = 1;
                before = 1;
            }
        }
        else
        {
            if(before < 0)
            {
                minus_idx += 1;
            }
            else
            {
                if(max < plus_idx)
                {
                    max = plus_idx;
                }
                plus_idx =1;
                before = -1;
            }
        }
        if(i == (number -1) && (plus_idx > max || minus_idx > max))
        {
            if(minus_idx > plus_idx)
            {
                max = minus_idx;
            }
            else{
                max = plus_idx;
            }

        }
    }
    printf("%d", max);

    return 0;
}