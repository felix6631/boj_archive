#include <stdio.h>

int main(void) {
    int n,m,a[100][100],b[100][100];
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d",&b[i][j]);
            a[i][j] += b[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
            printf("%d ",a[i][j]);
        puts("");
    }
    return 0;
}