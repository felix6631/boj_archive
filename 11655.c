#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
    char str[128] = {0,};
    scanf("%[^\n]",str);
    for(int i=0;i<strlen(str);i++) {
        if(isupper(str[i])) 
            str[i] = ((str[i]-'A')+13)%26 + 'A';
        else if(islower(str[i]))
            str[i] = ((str[i]-'a')+13)%26 + 'a';
        
    }
    puts(str);
    return 0;
}