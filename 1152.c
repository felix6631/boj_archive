#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define DEBUG

int main(void) {
    char a[1000001] = {0};
    int word_count = 0;
    _Bool in_word = 0;  
    fgets(a, sizeof(a), stdin);
    
    int len = strlen(a);
    if (len > 0 && a[len-1] == '\n') {
        a[len-1] = '\0';
        len--;
    }

    
    for(int i = 0; i < len; i++) {
        if(a[i] != ' ') { 
            if(!in_word) { 
                word_count++;
                in_word = 1;
            }
        } else {
            in_word = 0;  
        }
    }
    
    printf("%d\n", word_count);
    
    return 0;
}