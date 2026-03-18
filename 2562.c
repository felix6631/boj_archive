#include <stdio.h>

int main(void) {
    int m=0,t,j=0;
    for(int i=0;i<9;i++) {
        scanf("%d",&t);
        if(t>m) {
            m = t;
            j = i+1;
        }
    }
    printf("%d\n%d\n",m,j);
    return 0;
}