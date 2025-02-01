#include <stdio.h>
struct move
{
    char direction;
    int size;
};

int main() {
    int number;
    scanf("%d", &number);
    int x =0;
    int y =0;
    int dx[4] ={0 ,1 , 0, -1};
    int dy[4] ={ 1, 0, -1, 0};
    struct move moves[number];
    for(int i =0; i < number; ++i)
    {
        scanf(" %c %d",&moves[i].direction, &moves[i].size);

    }
    int time =0;
    int result = -1;
    for(int i  =0; i < number; ++i)
    {
        for(int j = time +1; j <= time + moves[i].size; ++j)
        {
            if(moves[i].direction == 'N')
            {
                x += dx[0];
                y += dy[0];
            }
            else if(moves[i].direction == 'S')
            {
                x += dx[2];
                y += dy[2];
            }
            else if(moves[i].direction == 'E')
            {
                x += dx[1];
                y += dy[1];
            }
            else if(moves[i].direction == 'W')
            {
                x += dx[3];
                y += dy[3];
            }
            if(x == 0 && y == 0 && result == -1)
            {
                result = j;
            }
        }
        time += moves[i].size;
    }
    printf("%d",result);
    return 0;
}