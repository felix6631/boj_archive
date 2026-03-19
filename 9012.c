#include <stdio.h>
#include <string.h>

int main(void) {
    int n,top = 0;
    char buffer[256] = {0,};
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        top = 0;
        scanf("%s",buffer);
        for(int j=0;j<strlen(buffer);j++) {
            if(buffer[j] == '(')
                top++;
            else
                top--;
            if(top < 0) {
                printf("NO\n");
                goto EOL;
            }
        }
        if(top != 0) {
            printf("NO\n");
            goto EOL;
        }
        printf("YES\n");
EOL:
        
    }
    return 0;
}