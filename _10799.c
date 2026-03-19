#include <stdio.h>
#include <string.h>

int main(void) {
    char belt[100001] = {0,};
    int top = -1, ans = 0;
    scanf("%s",belt);
    for(int i=0;i<strlen(belt);i++) {
        if(belt[i] == '(')
            top ++;
        else {
            //if(belt[i-1] == '(')
            ans += top+1;
            top--;
        }
    }

    printf("%d\n",ans);
    return 0;
}