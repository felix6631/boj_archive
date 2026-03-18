#include <stdio.h>

int main(void) {
    int n,v,a[100] = {0},c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",a+i);
    scanf("%d",&v);
    for(int i=0;i<n;i++)
        c += (a[i]==v);
    printf("%d\n",c);
    return 0;
}