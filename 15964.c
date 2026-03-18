#include <stdio.h>
long long f(long long a, long long b) {
    return a*a-b*b;
}
int main(void) {
    long long a,b;
    scanf("%lld%lld",&a,&b);
    printf("%lld\n",f(a,b));
    return 0;
}