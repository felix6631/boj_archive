#include <stdio.h>

int main(void) {
    int a[5],b;
    scanf("%d%d%d%d%d",a,a+1,a+2,a+3,a+4);
    for(int i=0;i<5;i++)
        b += a[i]*a[i];
    printf("%d\n",b%10);
    return 0;
}