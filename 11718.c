#include <stdio.h>

int main(void) {
    char a;
    while(~scanf("%c",&a))
        putc(a,stdout);
    return 0;
}