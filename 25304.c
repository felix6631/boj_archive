#include <stdio.h>
typedef struct {
    int price,cnt;
} product;

int main(void) {
    unsigned int total,n,sum = 0;
    scanf("%d %d",&total,&n);
    product list = {0,0};
    for(int i=0;i<n;i++) {
        scanf("%d %d",&list.price,&list.cnt);
        sum += list.price * list.cnt;
    }
    if(sum == total)
        printf("Yes");
    else
        printf("No");
    return 0;
}