#include <stdio.h>
#include <string.h>
int main(void) {
    char a[1000] = {0};
    scanf("%s",a);
    printf("%d\n",(int)strlen(a));
    return 0;
}