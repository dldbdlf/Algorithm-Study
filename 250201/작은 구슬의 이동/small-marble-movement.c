#include <stdio.h>

int main() {
    int n,t;
    scanf("%d %d",&n,&t);
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0, -1};
    int x,y,index;
    char direction;
    scanf("%d %d %c",&x , &y, &direction);
    if(direction == 'U')
    {
        index = 2;
    }
    else if(direction == 'D')
    {
        index = 0;
    }
    else if(direction == 'R')
    {
        index = 1;
    }
    else{
        index = 3;
    }

    for(int i =0; i < t; ++i)
    {
        x += dx[index];
        y += dy[index];
        if(x <= 0 || x > n || y > n || y <= 0)
        {
            index += 2;
            index %= 4;
            x += dx[index];
            y += dy[index];
        }

    }
    printf("%d %d", x , y);


    return 0;
}