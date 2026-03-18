#include <stdio.h>

int main(void) {
    int a,b,c;
    scanf("%d%d",&a,&b);
    if(a>0 && b>0) puts("1");
    else if(a<0 && b>0) puts("2");
    else if(a<0 && b<0) puts("3");
    else if(a>0 && b<0) puts("4");
    return 0;
}