#include <stdio.h>
struct student
{
    int height;
    int weight;
    int number;
};
void sortbyheight(struct student students[],int n)
{
    for(int i =0; i < n-1; ++i)
    {
        for(int j =0; j <n - i -1; ++j)
        {
            if(students[j].height > students[j+1].height)
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
        }
    }

}
int main() {
    int n;
    scanf("%d", &n);
    struct student students[n];
    for(int i =0; i < n; ++i)
    {
        scanf("%d %d",&students[i].height, &students[i].weight);
        students[i].number = i+1 ;
    }
    sortbyheight(students, n);
    for(int i =0; i < n; ++i)
    {
        printf("%d %d %d\n",students[i].height, students[i].weight, students[i].number);
    }
    return 0;
}