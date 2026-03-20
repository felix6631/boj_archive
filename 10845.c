#include <stdio.h>

int main(void) {
    int queue[50000] = {0,};
    int front = 0, rear = 0, n, t;
    char buffer[64] = {0,};
    scanf("%d",&n);

    for(int i=0;i<n;i++) {
        scanf("%s",buffer);
        switch(buffer[1]) {
            case 'u': //push
                scanf("%d",&t);
                queue[rear++] = t;
                break;
            case 'o': //pop
                if(front == rear)
                    printf("-1\n");
                else
                    printf("%d\n",queue[front++]);
                break;
            case 'i': //size
                printf("%d\n",rear-front);
                break;
            case 'm': //empty
                printf("%d\n",rear==front);
                break;
            case 'r': //front
                if(rear==front)
                    printf("-1\n");
                else
                    printf("%d\n",queue[front]);
                break;
            case 'a': //back; rear
                if(rear==front)
                    printf("-1\n");
                else
                    printf("%d\n",queue[rear-1]);
                break;
        }
    }
    return 0;
}