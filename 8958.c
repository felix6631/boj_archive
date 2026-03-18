#include <stdio.h>
#include <string.h>

int main(void) {
    int streak=0,n,res=0;
    char s[100] = {0};
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        res = 0; streak = 0;
        scanf("%s",s);
        for(int j=0;j<strlen(s);j++) {
            if(s[j]=='O')
                res += ++streak;
            else
                streak = 0;
        }
        printf("%d\n",res);
    }
    return 0;
}