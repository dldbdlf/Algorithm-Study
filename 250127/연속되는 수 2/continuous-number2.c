#include <stdio.h>

int main() {
    int number;
    scanf("%d",&number);
    int cnt =1;
    int max_cnt = 0;
    int before = -1;

    for(int i =0; i < number; ++i)
    {
        int num;
        scanf("%d", &num);
        if(before == num)
        {
            cnt += 1;
            if(i == (number -1))
            {
                max_cnt = cnt;
            }

        }
        else
        {
            if(max_cnt < cnt)
            {
                max_cnt = cnt;
            }
            cnt = 1;
            before = num;
        }
    }
    printf("%d",max_cnt);
    return 0;
}