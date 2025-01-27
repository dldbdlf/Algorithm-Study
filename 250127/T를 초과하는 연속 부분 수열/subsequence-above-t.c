#include <stdio.h>

int main() {
    int size, standard;
    scanf("%d %d",&size, &standard);
    int result =0;
    int max = 0;
    for(int i =0; i < size; ++i)
    {
        int number;
        scanf("%d ",&number);
        if(number > standard)
        {
            result += 1;
        }
        else
        {
            if(max < result)
            {
                max = result ;
            }
            result = 0;
        }
        if(i == (size -1) && max < result)
        {
            max = result;
        }

    }
    printf("%d",max);


    return 0;
}