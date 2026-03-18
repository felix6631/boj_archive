#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char a[10],b[10],c[10];
    scanf("%s %s %s",a,b,c);
    printf("%d\n",atoi(a)+atoi(b)-atoi(c));
    strcat(a,b);
    printf("%d\n",atoi(a)-atoi(c));
    
    return 0;
}