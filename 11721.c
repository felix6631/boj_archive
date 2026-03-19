#include <stdio.h>

int main(void) {
    char buffer[128] = {0,};
    fgets(buffer,128,stdin);
    for(int i=0;buffer[i];i++) {
        putc(buffer[i],stdout);
        if(i%10 == 9) puts("");
    }
    return 0;
}