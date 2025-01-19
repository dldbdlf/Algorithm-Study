#include <stdio.h>
struct student
{
    int height;
    int weight;
    int number;
};

void sort(struct student students[], int num)
{
    for(int i=0 ; i < num-1; ++i )
    {
        for(int j =0; j < num -i -1; ++j)
        {
            if (students[j].height < students[j+1].height)
            {
                struct student tmp = students[j];
                students[j] = students[j+1];
                students[j+1] = tmp;
            } 
            else if(students[j].height == students[j+1].height && students[j].weight < students[j+1].weight)
            {
                struct student tmp = students[j];
                students[j] = students[j+1];
                students[j+1] = tmp;
            }
            else if(students[j].weight == students[j+1].weight && students[j].number > students[j+1].number)
            {
                struct student tmp = students[j];
                students[j] = students[j+1];
                students[j+1] = tmp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    struct student students[n];
    for (int i =0; i < n; ++i)
    {
        scanf("%d %d",&students[i].height, &students[i].weight);
        students[i].number = i +1;
    }
    sort(students,n);
    for(int i =0; i < n; ++i)
    {
        printf("%d %d %d\n",students[i].height, students[i].weight, students[i].number);
    }

    return 0;
}