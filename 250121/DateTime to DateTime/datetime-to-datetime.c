#include <stdio.h>
struct date
{
    int day;
    int time;
    int minute;
};
int cal_min(int a, int b, int c)
{
    int result;
    result =0;
    result += (a * 24 * 60);
    result += (b * 60);
    result += c;
    return result; 
}
int main() {
    struct date day_default = {11,11,11};
    struct date late;
    scanf("%d %d %d", &late.day, &late.time, &late.minute);
    int minutes = cal_min(day_default.day, day_default.time, day_default.minute);
    int later = cal_min(late.day, late.time, late.minute);
    if(minutes > later)
    {
        printf("%d", -1);
    }
    else
    {
        printf("%d", later - minutes);
    }


    return 0;
}



