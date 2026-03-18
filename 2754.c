#include <stdio.h>

int main(void) {
    char a[10] = {0};
    scanf("%s",a);
    if(a[0]=='F') {
        puts("0.0");
        return 0;
    }
    printf("%d.",69-a[0]-(a[1]=='-'));
    switch(a[1]) {
        case '+':
            printf("3");
            break;
        case '0':
            printf("0");
            break;
        case '-':
            printf("7");
    }
    puts("");
    return 0;
}