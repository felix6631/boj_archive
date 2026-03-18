#include <stdio.h>
#include <string.h>

int main(void) {
    int t,n;
    char s[30] = {0};
    scanf("%d",&t);
    for(int i=0;i<t;i++) {
        scanf("%d %s",&n,s);
        for(int j=0;j<strlen(s);j++) {
            for(int k=0;k<n;k++)
                putc(s[j],stdout);
        }
        puts("");
    }
    return 0;
}