#include <stdio.h>
#include <string.h>
struct square
{
    int x1;
    int y1;
    int x2;
    int y2;
};
int main() {
    int number;
    scanf("%d", &number);
    struct square squares[number];
    int minx = 100;
    int maxx = -100;
    int miny = 100;
    int maxy = -100;
    for(int i =0; i < number; ++i)
    {
        scanf("%d %d %d %d", &squares[i].x1, &squares[i].y1, &squares[i].x2, &squares[i].y2);
        if(squares[i].x1 < minx)
        {
            minx = squares[i].x1;
        }
        if(squares[i].x2 > maxx)
        {
            maxx = squares[i].x2;
        }
        if(squares[i].y1 < miny)
        {
            miny = squares[i].y1;
        }
        if(squares[i].y2 > maxy)
        {
            maxy = squares[i].y2;
        }
    }
    int sizex = maxx - minx;
    int sizey = maxy - miny;
    int numbers[sizex][sizey];
    memset(numbers, 0x00, sizeof(numbers));
    for(int i =0; i < number; ++i)
    {
        for(int j = squares[i].x1; j < squares[i].x2; ++j)
        {
            for(int z = squares[i].y1; z < squares[i].y2; ++z)
            {
                if((i % 2) == 1)
                {
                    numbers[j- minx][z- miny] = 1;
                }
                else
                {
                    numbers[j -minx][z - miny] = 2;
                }
            }
        }
    }
    int result = 0;
    for(int i = 0; i < sizex; ++i)
    {
        for(int j =0; j < sizey; ++j)
        {
            if(numbers[i][j] == 1)
            {
                result += 1;
            }
        }
    }
    printf("%d", result);

    return 0;
}