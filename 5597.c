#include <stdio.h>

int main(void) {
    _Bool a[31] = {1,};
    int t;
    for(int i=0;i<28;i++) {
        scanf("%d",&t);
        a[t] = 1;
    }
    for(int i=0;i<31;i++) {
        if(a[i]==0)
            printf("%d\n",i);
    }
    return 0;
    
}