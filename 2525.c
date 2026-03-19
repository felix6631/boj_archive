#include <stdio.h>

int main(void) {
    int h,m,t;
    scanf("%d %d %d",&h,&m,&t);
    m += t;
    if(m >=60) {
        h += m / 60;
        m %= 60;
    }
    if(h>=24) {
        h %= 24;
    }
    printf("%d %d\n",h,m);
    return 0;
}  