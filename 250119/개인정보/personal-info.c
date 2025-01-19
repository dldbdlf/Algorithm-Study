#include <stdio.h>
#include <string.h>
struct person
{
    char name[11];
    int height;
    float weight;
};
void sortbyname(struct person people[], int n)
{
    for(int i =0; i < n -1; ++i)
    {
        for(int j =0; j < n -i -1; ++j)
        {
            if(strcmp(people[j].name, people[j+1].name) > 0)
            {
                struct person tmp = people[j];
                people[j] = people[j+1];
                people[j +1]= tmp;
            }
        }
    }
}
void sortbyheight(struct person people[], int n)
{
    for(int i =0; i < n-1; ++i)
    {
        for (int j =0; j < n - i -1; ++j)
        {
            if(people[j].height < people[j+1].height)
            {
                struct person tmp = people[j];
                people[j] = people[j+1];
                people[j +1]= tmp;
            }
        }
    }
}

int main() {
    struct person people[5];
    for(int i =0; i < 5; ++i)
    {
        scanf("%s %d %f", people[i].name, &people[i].height, &people[i].weight);
    }
    printf("name\n");
    sortbyname(people,5);
    for(int i =0; i < 5; ++i)
    {
        printf("%s %d %.1f\n",people[i].name, people[i].height, people[i].weight);
    }
    printf("\n");
    printf("height\n");
    sortbyheight(people,5);
    for(int i =0; i < 5; ++i)
    {
        printf("%s %d %.1f\n",people[i].name, people[i].height, people[i].weight);
    }

    return 0;
}