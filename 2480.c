#include <stdio.h>

int main(void) {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c)
        printf("%d\n",10000+a*1000);
    else if(a==b)
        printf("%d\n",1000+a*100);
    else if(a==c)
        printf("%d\n",1000+a*100);
    else if(c==b)
        printf("%d\n",1000+c*100);
    else {
        int max = a>b?a:b;
        printf("%d\n",(max>c?max:c)*100);
    }
    return 0;
}
