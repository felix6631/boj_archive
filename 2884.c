#include <stdio.h>
#define DAY_IN_MINUTES 24*60
int main(void) {
    int h,m,t=DAY_IN_MINUTES;
    scanf("%d%d",&h,&m);
    t += h*60+m;
    t -= 45;
    t %= DAY_IN_MINUTES;
    printf("%d %d\n",t/60,t%60);
    return 0;
}