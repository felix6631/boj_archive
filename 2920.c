#include <stdio.h>
#include <stdlib.h>
int sign(int a) {
    return a/abs(a);
}

int main(void) {
    int a[10] = {0};
    int p = 0;
    for(int i=0;i<8;i++)
        scanf("%d",a+i);
    for(int i=0;i<7;i++) {
        if(p!=0 && sign(p)!=sign(a[i]-a[i+1])) {
            puts("mixed");
            return 0;
        }
        p = sign(a[i]-a[i+1]);
    }
    if(p>0) puts("descending");
    else puts("ascending");
    return 0;
      
}