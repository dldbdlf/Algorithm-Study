#include <stdio.h>
struct person
{
    char name[11];
    int score1;
    int score2;
    int score3;
    int total;
};

void sort(struct person people[],  int num)
{
    for (int i =0; i < num-1; ++i)
    {
        for (int j =0; j < num - i -1; ++j)
        {
            if(people[j].total > people[j+1].total)
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
    scanf("%d", &n);
    struct person people[n];
    for(int i =0; i < n; ++i)
    {
        scanf("%s %d %d %d",people[i].name, &people[i].score1, &people[i].score2, &people[i].score3);
        people[i].total = people[i].score1 + people[i].score2 + people[i].score3;
    }
    sort(people, n);
    for(int i =0 ; i < n; ++i)
    {
        printf("%s %d %d %d\n", people[i].name, people[i].score1, people[i].score2, people[i].score3);
    }

    return 0;
}