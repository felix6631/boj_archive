#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a[10] = {0,},sum=0;
    for(int i=0;i<9;i++) {
        
        scanf("%d",a+i);
        sum += a[i];
    }
    
    for(int i=0;i<8;i++) {
        for(int j=i+1;j<9;j++) {
            if(sum - a[i] - a[j] == 100) {
                a[i] = a[j] = 0;
                goto print;
            }
        }
    }

print:
    for(int i=0;i<8;i++) {
        int mi=i, m = 100;
        for(int j=i;j<9;j++) {
            if(a[j] < a[mi]) {
                mi = j;
            }
        }
        int t = a[i];
        a[i] = a[mi];
        a[mi] = t;
    }
    for(int i=0;i<9;i++){
        if(a[i] != 0)
            printf("%d\n",a[i]);
    }
    return 0;
}
