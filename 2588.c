#include <stdio.h>

int main(void) {
    int a,b,b0;
    scanf("%d %d",&a,&b);
    b0 = b;
    for(int i=0;i<3;i++) {
        printf("%d\n",a*(b%10));
        b /= 10;
    }
    printf("%d\n",a*b0);
    return 0;
}