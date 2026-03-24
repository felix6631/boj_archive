#include <stdio.h>
#define ull unsigned long long
#define maximum 4
ull gcd(ull a, ull b) {
    ull rem;
    while(b) {
        rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}

int main(void) {
    ull a,b,na=0,nb=0;
    //scanf("%llu %llu",&a,&b);
    for(ull i=1;i<maximum;i++) {
        for(ull j=1;j<maximum;j++) {
            a = i; b = j; na=0; nb =0;
            while(a--) {
                na*=10; na+=1;
            }
            while(b--) {
                nb*=10; nb+=1;
            }
            printf("%llu %llu: %llu\n",i,j,gcd(a,b));
        }
    }

    printf("%llu\n",gcd(na,nb));
    return 0;
}