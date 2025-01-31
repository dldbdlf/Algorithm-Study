#include <stdio.h>

int main() {
    char direction[100001];
    scanf("%s",direction);
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    int x = 0;
    int y = 0;
    int first = 0;
    for(int i =0; i < 100001; ++i)
    {
        if(direction[i] == 'L')
        {
            first += 3;
            first %= 4;
        }
        else if(direction[i] == 'R')
        {
            first += 1;
            first %= 4; 
        }
        else if(direction[i] == 'F')
        {
            x += dx[first];
            y += dy[first];
        }
        else{
            break;
        }
    }
    printf("%d %d",x,y);
    return 0;
}