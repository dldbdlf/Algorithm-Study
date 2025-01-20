#include <stdio.h>
#include <stdlib.h>
struct point
{
    int x;
    int y;
    int num;
    int distance;
};
void sortbydistance(struct point points[], int num)
{
    for(int i =0; i < num-1; ++i)
    {
        for(int j =0; j < num -i -1; ++j)
        {
            if(points[j].distance > points[j+1].distance)
            {
                struct point tmp = points[j];
                points[j] = points[j+1];
                points[j+1] = tmp; 
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    struct point points[n];
    for(int i =0; i < n; ++i)
    {
        scanf("%d %d",&points[i].x, &points[i].y);
        points[i].distance = abs(points[i].x) + abs(points[i].y);
        points[i].num = i+1;
    }
    sortbydistance(points, n);
    for(int i =0; i < n; ++i)
    {
        printf("%d\n",points[i].num);
    }
    return 0;
}