#include <stdio.h>
struct person
{
    char name[11];
    int height;
    int weight;
};
void sort(struct person people[], int num)
{
    for(int i =0; i < num -1; ++i)
    {
        for(int j =0; j < num -i -1; ++j)
        {
            if(people[j].height > people[j +1].height)
            {
                struct person tmp = people[j];
                people[j] = people[j+1];
                people[j+1] = tmp;
            }
            else if(people[j].height == people[j+1].height && people[j].weight < people[j+1].weight)
            {
                struct person tmp = people[j];
                people[j] = people[j+1];
                people[j+1] = tmp;
            }
        }
    }
}


int main() {
    int n;
    scanf("%d",&n);
    struct person people[n];
    for(int i =0; i < n; ++i)
    {
        scanf("%s %d %d",people[i].name, &people[i].height, &people[i].weight);
    }
    sort(people,n);
    for(int i =0; i < n; ++i)
    {
        printf("%s %d %d\n",people[i].name,people[i].height, people[i].weight);
    }
    return 0;
}