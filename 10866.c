#include <stdio.h>

int main(void) {
  int n,deque[50000] = {0,},front=20000,rear=20001,t;
  char buffer[64] = {0,};
  scanf("%d", &n);
  for(int i=0;i<n;i++) {
    scanf("%s",buffer);
    switch(buffer[1]) {
      case 'u': //push
        scanf("%d",&t);
        if(buffer[5] == 'f')
          deque[front--] = t;
        else
          deque[rear++] = t;
        break;
      case 'o': //pop
        if(rear - front <= 1) {
          printf("-1\n"); break;
        }
        if(buffer[4] == 'f') {
          printf("%d\n",deque[++front]);
        }
        else {
          printf("%d\n",deque[--rear]);
        }
        break;
      case 'i': //size
        printf("%d\n",rear-front-1);
        break;
      case 'm': //empty
        printf("%d\n",rear-front-1 == 0);
        break;
      case 'r': //front
        if(rear-front > 1)
          printf("%d\n",deque[front+1]);
        else
          printf("-1\n");
        break;
      case 'a': //back; rear
        if(rear-front > 1)
          printf("%d\n",deque[rear-1]);
        else
          printf("-1\n");
        break;
    }
  }
  return 0;
}
