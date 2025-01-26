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
    memset(numbers, 0x00, sizeof(numbers));
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
                    numbers[i-a.x1][j- a.y1] =1;
                }
            }
        }

    }
    int result_minx = size_x;
    int result_maxx = 0;
    int result_miny = size_y;
    int result_maxy = 0;
    int cnt = 0;
    for(int i = 0; i < size_x; ++i)
    {
        for(int j =0; j < size_y; ++j)
        {
            if(numbers[i][j] != 1)
            {
                if(i < result_minx)
                {
                    result_minx = i;
                }
                if(i > result_maxx)
                {
                    result_maxx = i;
                }
                if( j < result_miny)
                {
                    result_miny =j;
                }
                if( j > result_maxy)
                {
                    result_maxy = j;
                }
                cnt += 1;
            }
        }
    }
    int result = (result_maxx -result_minx +1) * (result_maxy - result_miny+1);
    if(cnt == 0)
    {
        result =0;
    }
    printf("%d", result);

    return 0;
}