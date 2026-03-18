#include <stdio.h>
/**
 * ds = sqrt((x1-x2)^2+(y1-y2)^2)
 * r1 + r2
 * if       ds = 0 && r1==r2 -> -1
 * else if  ds = r1+r2 -> 1
 */
int main(void) {
    int t,x1,x2,y1,y2,r1,r2;
    scanf("%d",&t);
    for(int a=0;a<t;a++) {
        scanf("%d%d%d%d%d%d",&x1,&y1,&r1,&x2,&y2,&r2);
        int dist =  (x1-x2)*(x1-x2)+
                    (y1-y2)*(y1-y2);
        if (dist == 0) {
            if(r1 == r2)
                puts("-1");
            else
                puts("0");
        }
        else {
            int radist = r1*r1 + r2*r2;
            if(dist == radist-2*r1*r2 || dist == radist+2*r1*r2)
                puts("1");
            else if(dist < radist-2*r1*r2 || dist > radist+2*r1*r2)
                puts("0");
            else
                puts("2");
        }
    }
    return 0;

}