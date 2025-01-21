#include <stdio.h>
struct days
{
    int month;
    int day;
};
int date[13] ={0,31,28,31,30,31,30,31,31,30,31,30,31};
int cal_date(int month, int day)
{
    int result =0;
    for(int i =1; i < month; ++i)
    {
        result += date[i];
    }
    result += day;
    return result;
}
int main() {
    char days[7][3] ={"Mon", "Tue", "Wed", "Thu", "Fri","Sat", "Sun"};
    struct days day1;
    struct days day2;
    scanf("%d %d %d %d", &day1.month, &day1.day, &day2.month, &day2.day);
    int dates1 = cal_date(day1.month, day1.day);
    int dates2 = cal_date(day2.month, day2.day);
    int differ = dates2 - dates1;
    if (differ < 0)
    {
        int tmp = (differ % 7) + 7;
        printf("%s", days[tmp]);
    }
    else
    {
        int tmp = differ %7 ;
        printf("%s", days[tmp]);
    }

    return 0;
}