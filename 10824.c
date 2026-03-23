#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a,b,c,d;
    char t1[20] = {0,}, t2[20] = {0,};
    scanf("%d%d%d%d",&a,&b,&c,&d);
    sprintf(t1,"%d%d",a,b);
    sprintf(t2,"%d%d",c,d);
    printf("%lld\n",atoll(t1)+atoll(t2));
    return 0;
}