#include <stdio.h>
#include <limits.h>

int main(void) {
    int t,maxi,i=0,max=INT_MIN;
    for(;~scanf("%d",&t);i++) {
        if(max < t) {
            max = t; maxi = i;
        }
    }
    printf("%d\n",max);
    printf("%d %d\n",maxi/9+1,maxi%9+1);
    return 0;
}