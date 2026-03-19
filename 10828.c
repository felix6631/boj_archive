#include <stdio.h>

int main(void) {
    int n,stack[10000],top = 0,val;
    char oper[6] = {0,};
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%s",oper);
        switch(oper[0]) {
            case 'p':
                if(oper[1] == 'u') {
                    scanf("%d",&val);
                    stack[top++] = val;
                }
                else {
                    if(top>0)
                        printf("%d\n",stack[--top]);
                    else
                        printf("-1\n");
                }
                break;
            case 's':
                printf("%d\n",top);
                break;
            case 'e':
                printf("%d\n",top==0);
                break;
            case 't':
                printf("%d\n",top==0?-1:stack[top-1]);
                break;
        }
    }
    return 0;
}