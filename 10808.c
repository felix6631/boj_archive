#include <stdio.h>

int main(void) {
    int cnt[26] = {0,};
    char t;
    for(;~scanf("%c",&t);cnt[t-'a']++);

    for(int i=0;i<26;i++)
      printf("%d ",cnt[i]);

    puts("");
    return 0;
}
