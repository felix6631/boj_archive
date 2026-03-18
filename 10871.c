#include <stdio.h>

int main(void) {
    int n,x,a[10000] = {0},m=1<<16;
    scanf("%d%d",&n,&x);
    for(int i=0;i<n;i++)
        scanf("%d",a+i);
    for(int i=0;i<n;i++) {
        if(a[i]<x)
            printf("%d ",a[i]);
    }
    puts("");
    return 0;
}