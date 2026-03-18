#include <stdio.h>

int main(void) {
    char a[1000] = {0};
    int b;
    scanf("%s %d",a,&b);
    printf("%c\n",a[b-1]);
    return 0;
}