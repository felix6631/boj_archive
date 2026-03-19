#include <limits.h>
#include <stdio.h>

int main(void) {
    int n,cnt=0,min = INT_MAX;
    for(int i=0;i<7;i++) {
        scanf("%d",&n);
        if(n%2) {
            cnt+=n;
            if(n<min) min = n;
        }
    }
    if(cnt == 0)
        printf("-1");
    else
        printf("%d\n%d\n",cnt,min);
    return 0;
}