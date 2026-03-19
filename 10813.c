#include <stdio.h>
#define swap(x,y) { int t = (x); (x) = (y); (y) = (t); }
int main(void) {
    int n,m,arr[1000] = {0,},a,b;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) {
        arr[i]=i;
    }

    #ifdef DEBUG
    for(int i=1;i<=n;i++) {
        printf("%d ",arr[i]);
    }
    puts("");
    #endif

    for(int i=0;i<m;i++) {
        scanf("%d%d",&a,&b);
        swap(arr[a],arr[b]);
        #ifdef DEBUG
        printf("%d: ",i);
        for(int j=1;j<=n;j++) {
            printf("%d ",arr[j]);
        }
        puts("");
        #endif
    }

    for(int i=1;i<=n;i++) {
        printf("%d ",arr[i]);
    }
    puts("");
    return 0;
}