#include <stdio.h>
struct day
{
    int month;
    int days;
};
int days[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
int cal_date(int month, int day)
{
    int result =day;
    for(int i =1; i < month; ++i)
    {
        result += days[i];
    }
    return result;

}

int main() {
    struct day day1;
    struct day day2;
    scanf("%d %d %d %d",&day1.month, &day1.days, &day2.month, &day2.days);
    char date[4];
    char dates[7][4] ={"Mon", "Tue", "Wed","Thu","Fri","Sat","Sun"};
    scanf("%s", date);
    int day1_date = cal_date(day1.month, day1.days);
    int day2_date = cal_date(day2.month, day2.days);
    int idx;
    for(int i =0; i < 7; ++i)
    {
        if(date == dates[i])
        {
            idx = i;
            break;
        }
    }
    int differ = day2_date - day1_date;
    int result = differ / 7;
    if((differ % 7) >= idx)
    {
        result += 1;
    }
    printf("%d", result);

    
    return 0;
}