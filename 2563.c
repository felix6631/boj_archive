#include <stdio.h>

int main(void) {
    int board[101][101] = {0,};
    int x,y,n,sum = 0;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++) {
        scanf("%d %d",&x,&y);
        for(int j=x;j<x+10;j++) {
            for(int k=y;k<y+10;k++) {
                board[j][k] = 1;
            }
        }
    }

    for(int i=0;i<101;i++) {
        for(int j=0;j<101;j++) {
            sum += board[i][j];
        }
    }
    printf("%d\n",sum);
    return 0;
}