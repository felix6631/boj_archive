#include <stdio.h>
typedef struct {int o,z;} fib;
int main(void) {
    int t;
    scanf("%d",&t);
    fib dp[50] = {0,};
    dp[0].z = 1; dp[0].o = 0;
    dp[1].z = 0; dp[1].o = 1;
    for(int i=2;i<50;i++) {
        dp[i].z = dp[i-1].z + dp[i-2].z;
        dp[i].o = dp[i-1].o + dp[i-2].o;
    }
    for(int i=0;i<t;i++) {
        int n;
        scanf("%d",&n);      
        printf("%d %d\n",dp[n].z,dp[n].o);
    }
    return 0;
}