#include <stdio.h>

int main(void) {
    int n,min=1<<30,max=-((1<<30)),t;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&t);
        min = t<min?t:min;
        max = t>max?t:max;
    }
    printf("%d %d\n",min,max);
    return 0;
}