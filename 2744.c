#include <stdio.h>
#include <string.h>
int main(void) {
    char a[1000] = {0};
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++)
        printf("%c",a[i]^32);
    return 0;
}