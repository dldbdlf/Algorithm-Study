#include <stdio.h>
struct date
{
    int month;
    int day;
};
int days[13] ={0,31,28,31,30,31,30,31,31,30,31,30,31};

int main() {
    struct date day1;
    struct date day2;
    int result = 1;
    scanf("%d %d %d %d", &day1.month, &day1.day, &day2.month, &day2.day);
    for(int i = day1.month; i < day2.month; ++i)
    {
        result += days[i];

    }
    result += (day2.day - day1.day); 
    printf("%d", result);
    return 0;
}