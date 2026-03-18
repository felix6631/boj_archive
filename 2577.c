#include <stdio.h>

int main(void) {
    int a,b,c,t=1, cnt[10] = {0};
    scanf("%d%d%d",&a,&b,&c);
    t *= a*b*c;
    while(t) {
        cnt[t%10]++;
        t/=10;
    }
    for(int i=0;i<10;i++)
        printf("%d\n",cnt[i]);
    return 0;
}