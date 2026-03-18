#include <stdio.h>

int main(void) {
    int a=-1,b=-1,c=-1,m=0;
    while(1) {
        scanf("%d%d%d",&a,&b,&c);
        if(a+b+c==0)
            return 0;
        m=a>b?a:b;
        m=c>m?c:m;
        if(m*m == a*a + b*b + c*c - m*m)
            puts("right");
        else
            puts("wrong");
    }
    return 0;
}