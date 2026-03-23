#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return strcmp(a,b);
}

int main(void) {
    char buffer[1024] = {0,};
    char postfix[1024][1024] = {0,};
    scanf("%s",buffer);

    for(int i=0;i<strlen(buffer);i++) {
        strcpy(postfix[i],buffer+i);
    }

    qsort(postfix,strlen(buffer),sizeof(postfix[0]),compare);

    for(int i=0;i<strlen(buffer);i++) {
        puts(postfix[i]);
    }

    return 0;
}