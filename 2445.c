#include <stdio.h>

int main(void) {
    int n;
    int arr[101][101] = {0,};
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<i+1;j++) 
            printf("*");
        for(int j=i;j<n-1;j++)
            printf(" ");

        for(int j=0;j<n-i-1;j++)
            printf(" ");
        for(int j=0;j<i+1;j++)
            printf("*");

        puts("");
    }
    for(int i=n-2;i>=0;i--) {
        for(int j=0;j<i+1;j++) 
            printf("*");
        for(int j=i;j<n-1;j++)
            printf(" ");

        for(int j=0;j<n-i-1;j++)
            printf(" ");
        for(int j=0;j<i+1;j++)
            printf("*");
        
        puts("");
    }
    return 0;
}