#include <stdio.h>
#include <string.h>
int main(void) {
    int n,s=0;
    char a[1000] = {0};
    scanf("%d",&n);
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++)
        s += a[i]-'0';
    printf("%d\n",s);
    return 0;
}