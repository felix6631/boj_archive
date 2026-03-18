#include <stdio.h>

int main(void) {
  int n,m,cnt=0;
  scanf("%d",&n);
  for(int i=0;i<5;i++) {
    scanf("%d",&m);
    if(n==m%10)
      cnt += 1;
  }
  printf("%d\n",cnt);
  return 0;
}
