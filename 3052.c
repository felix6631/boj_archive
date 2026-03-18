#include <stdio.h>

int main(void) {
    int a[42] = {0};
    int t,c=0;
    for(;~scanf("%d",&t);)
        a[t%42]++;
    for(int i=0;i<42;i++) {
        if(a[i]) c++;
    }        
    printf("%d\n",c);
    return 0;
}