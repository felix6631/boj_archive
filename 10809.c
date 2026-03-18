#include <stdio.h>
#include <string.h>

int main(void) {
    char str[110] = {0};
    scanf("%s",str);
    for(int i=0;i<26;i++) {
        char* t = strchr(str,'a'+i);
        printf("%ld ",t!=NULL?t-str:-1);
    }
    puts("");
    return 0;
}