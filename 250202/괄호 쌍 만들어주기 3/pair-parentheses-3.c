#include <stdio.h>
#include <string.h>
int main() {
    char words[100];
    memset(words, '0', sizeof(words));
    scanf("%s",words);
    int result =0;
    for(int i =0; i < 100; ++i)
    {
        if(words[i] == '(')
        {
            for(int j = i +1; j < 100; ++j)
            {
                if(words[j] == ')')
                {
                    result += 1;
                }
            }
        }
        else if(words[i] == ')')
        {
            continue;
        }
        else
        {
            break;
        }
    }
    printf("%d", result);
    return 0;
}