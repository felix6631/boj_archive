#include <stdio.h>

int main(void) {
    int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int days_sum[13] = {0,};
    char* week[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    int month,day,today;
    for(int i=1;i<=12;i++)
        days_sum[i] = days_sum[i-1] + days[i];
    
    scanf("%d %d",&month,&day);
    today = days_sum[month-1] + day - 1;
    today %= 7;
    printf("%s\n",week[today]);
    return 0;
}