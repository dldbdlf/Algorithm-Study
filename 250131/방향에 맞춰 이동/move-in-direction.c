#include <stdio.h>
struct move
{
    char direction;
    int size;
};

int main() {
    int number;
    scanf("%d",&number);
    int x =0;
    int y =0;
    struct move moves[number];
    for(int i =0; i < number; ++i)
    {
        scanf(" %c %d",&moves[i].direction, &moves[i].size);
        if(moves[i].direction == 'N')
        {
            y += moves[i].size;
        }
        else if(moves[i].direction == 'E')
        {
            x += moves[i].size;
        }
        else if(moves[i].direction == 'S')
        {
            y -= moves[i].size;
        }
        else{
            x -= moves[i].size;
        }
    }
    printf("%d %d",x , y);

    return 0;
}