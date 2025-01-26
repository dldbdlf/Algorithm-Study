#include <stdio.h>
#include <string.h>
struct square{
    int x1;
    int y1;
    int x2;
    int y2; 
};

int main() {
    struct square squares[3];
    int min_x = 1000;
    int max_x = -1000;
    int min_y = 1000;
    int max_y = -1000;
    for(int i =0; i < 3; ++i)
    {
        scanf("%d %d %d %d",&squares[i].x1, &squares[i].y1, &squares[i].x2, &squares[i].y2);
        if(min_x > squares[i].x1)
        {
            min_x = squares[i].x1;
        }
        if(max_x < squares[i].x2)
        {
            max_x = squares[i].x2;
        }
        if(min_y > squares[i].y1)
        {
            min_y = squares[i].y1;
        }
        if(max_y < squares[i].y2)
        {
            max_y = squares[i].y2;
        }
    }
    int size_x = max_x - min_x;
    int size_y = max_y - min_y;
    int numbers[size_x][size_y];
    memset(numbers, 0x00,sizeof(numbers));
    for(int i =0; i < 3; ++i)
    {
        for(int j = squares[i].x1; j < squares[i].x2; ++ j)
        {
            for(int z = squares[i].y1; z <squares[i].y2; ++z)
            {
                if(i == 2)
                {
                    numbers[j- min_x][z- min_y] =0;
                }
                else
                {
                    numbers[j- min_x][z- min_y] = 1;
                }
            }
        }
    }
    int result =0;
    for(int i = 0; i < size_x; ++i)
    {
        for(int j = 0; j < size_y; ++j)
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
