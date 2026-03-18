#include <stdio.h>

int main(void) {
    int a;
    scanf("%d",&a);
    printf("%d\n",a%4==0&&a%100!=0||a%400==0);
    return 0;
}