#include <stdio.h>
int n,t;
int k(int a) {
    return a/t + (a%t!=0?1:0);
}

int main(void) {
    int a,b,c,d,e,f,p,s;
    scanf("%d%d%d%d%d%d%d%d%d",
            &n,&a,&b,&c,&d,&e,&f,&t,&p);
    s = a+b+c+d+e+f;
    printf("%d\n%d %d\n",
        k(a)+k(b)+k(c)+k(d)+k(e)+k(f),
        s/p,s%p);
    return 0;
}