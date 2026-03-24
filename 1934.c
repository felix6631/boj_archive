#include <stdio.h>

int gcd(int a, int b) {
    int rem;
    while(b) {
        rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}

int main(void) {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d\n",a*b/gcd(a,b));
    }
    return 0;
}