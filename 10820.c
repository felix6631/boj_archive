#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void) {
    char str[128] = {0,};
    int cnt[4];
    for(;(fgets(str,128,stdin))!=NULL;) {
        cnt[0] = cnt[1] = cnt[2] = cnt[3] = 0;
        for(int j=0;j<strlen(str);j++) {
            if(islower(str[j]))       cnt[0]++;
            else if(isupper(str[j]))  cnt[1]++;
            else if(isdigit(str[j]))  cnt[2]++;
            else if(str[j] == ' ')    cnt[3]++;
        }

        printf("%d %d %d %d\n",cnt[0],cnt[1],cnt[2],cnt[3]);
        fflush(stdin); fflush(stdout);
        memset(str,0,128);
    }
    return 0;
}
