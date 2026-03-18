#include <stdio.h>
int main(void) {
    long long a,b,c;
    scanf("%lld%lld",&a,&b);
    c = a-b;
    c *= c<0?-1:1;
    printf("%lld\n",c);
    return 0;
}