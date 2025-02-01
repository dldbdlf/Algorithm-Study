#include <stdio.h>

int main() {
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0 ,-1, 0};
    int index = 0;
    int x =0;
    int y =0;
    int result = -1;
    char moves[100001];
    scanf("%s", moves);
    for(int i =0; i < 100001; ++i)
    {
        if(moves[i] == 'L')
        {
            index += 3;
            index %= 4;
        }
        else if(moves[i] == 'R')
        {
            index += 1;
            index %= 4;
        }
        else if (moves[i] == 'F')
        {
            x += dx[index];
            y += dy[index];
            if(x == 0 && y == 0 && result == -1)
            {
                result = i +1;
                break;
            }
        }
        else{
            break;
        }
    } 
    printf("%d", result);
    return 0;
}