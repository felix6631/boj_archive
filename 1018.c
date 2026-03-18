#include <stdio.h>

int main(void) {
    int n,m;
    char board[64][64] = {0};
    int check[64][64] = {0};
    int dx[] = {1,0,-1,0}, dy[] = {0,1,0,-1};
    int cnt=0, cv = 0,  min = 2<<12, flip = 0;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%s",board[i]);
    for(int i=0;i<=n-8;i++) {
        for(int j=0;j<=m-8;j++) {
            flip = 'W';      
            cnt = 0;
            for(int k=i;k<i+8;k++) {
                for(int l=j;l<j+8;l++) {
                    if(flip == board[k][l]) {
                        cnt += 1;
                    }
                    flip = (flip == 'W' ? 'B' : 'W');
                }
                flip = (flip == 'W' ? 'B' : 'W');
            }
            min = (cnt < min ? cnt : min);

            flip = 'B';      
            cnt = 0;
            for(int k=i;k<i+8;k++) {
                for(int l=j;l<j+8;l++) {
                    if(flip == board[k][l]) {
                        cnt += 1;
                    }
                    flip = (flip == 'W' ? 'B' : 'W');
                }
                flip = (flip == 'W' ? 'B' : 'W');
            }
            min = (cnt < min ? cnt : min);
        }
    }
    printf("%d\n",min);
    return 0;
}