#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int queue[50000] = {0,};
int front,rear;

int main(void) {
    int n,k,cnt;
    scanf("%d %d",&n,&k);
    printf("<");
    for(int i=0;i<n;i++) {
        queue[i] = i+1;
    }

    for(int i=0,cnt=1;rear<n;cnt++,i=(i+1)%n) {
        if(queue[i] == 0) {
            cnt -= 1;
            i = (i+n-1)%n;
            continue;
        }
        if(cnt % k  == 0) {
            rear++;
            printf("%d, ",queue[i]);
        }
        
    }
    
    printf("\b>\n");
    return 0;
}
