#include <stdio.h>

int main(void) {
    char c = 0;
    while((c = getc(stdin)) != -1) {
        putc(c,stdout);
    }
    return 0;
}