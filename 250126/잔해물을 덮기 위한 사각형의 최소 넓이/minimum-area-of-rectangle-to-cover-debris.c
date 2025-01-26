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
    struct square a;
    struct square b;
    scanf("%d %d %d %d", &a.x1, &a.y1, &a.x2, &a.y2);
    scanf("%d %d %d %d", &b.x1, &b.y1, &b.x2, &b.y2);
    int size_x = a.x2 - a.x1;
    int size_y = a.y2 - a.y1;
    int numbers[size_x][size_y];
    memset(numbers,0x01, sizeof(numbers));
    for(int i = b.x1; i < b.x2; ++i)
    {
        if(i< a.x1 || i >= a.x2)
        {
            continue;
        }
        else
        {
            for(int j = b.y1; j < b.y2; ++j )
            {
                if(j < a.y1 || j >= a.y2)
                {
                    continue;
                }
                else
                {
                    numbers[i-a.x1][j- a.y1] =0;
                }
            }
        }

    }
    int result_minx = a.x2;
    int result_maxx = a.x1;
    int result_miny = a.y2;
    int result_maxy = a.y1;
    for(int i = 0; i < size_x; ++i)
    {
        for(int j =0; j < size_y; ++j)
        {
            if(numbers[i][j] == 1)
            {
                if(i < result_minx)
                {
                    result_minx = i;
                }
                if(i > result_maxx)
                {
                    result_maxx = i;
                }
                if( i < result_miny)
                {
                    result_miny =i;
                }
                if( i > result_maxy)
                {
                    result_maxy = i;
                }
            }
        }
    }
    int result = (result_maxx -result_minx) * (result_maxy - result_miny);
    printf("%d", result);

    return 0;
}