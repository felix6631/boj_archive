#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int w[150][150];
int cost[150] = {0,};
int n;
int djikstra();
void add(int[],int);
void get(int[]);
#define swap(x,y) {int temp = (x); (x) = (y); (y) = temp;}
int main(void) {
    int t,att = 1,rupee = 0;
    while(1) {
        rupee = 0;
        scanf("%d",&n);
        if(n==0) return 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                scanf("%d",&w[i][j]);
            }
        }
        rupee = djikstra();
        printf("Problem %d: %d\n ",att++,rupee);
    }
    return 0;
}
int djikstra() {
    
    int heap[15000] = {0,};
    for(int i=0;i<15000;i++) heap[i] = -1;
    cost[0] = 0;
    add(heap,0);
    for(int i=1;i<n*n;i++) {
        cost[i] = 11;
        add(heap,i);
    }

    int u = 0;
    while(heap[1]!=-1) {
        u = heap[1];
        #ifdef DEBUG
        printf("mid point: %d\n",u);
        #endif
        get(heap);
        for(int i=1;i<n*n;i++) {
            if(i == u-1 || i == u+1 || i == u+n || i == u-n) {
                int alt = cost[u] + w[u][i];
                if(alt < cost[i]) {
                    printf("\tupdate: %d->%d: %d\n",u,i,alt);
                    cost[i] = alt;
                }
            }
        }
    }
    
    #ifdef DEBUG
    for(int i=0;i<n*n;i++) {
        if(i%n==0) puts("");
        printf("%d ",cost[i]);
    }
    puts("");
    #endif //DEBUG
    
    return cost[n-1];
}
void add(int heap[], int value) {
    int i=1;
    for(;heap[i]!=-1;i++);
    heap[i] = value;
    printf("%d is saved on %d\n",value,i);
    while(heap[i] != -1 && cost[heap[i]] < cost[heap[i/2]]) {
        swap(heap[i],heap[i/2]);
        i /= 2;
    }   
}
void get(int heap[]) {
    int i=1,leap = 0;
    for(;heap[i]!=-1;i++);
    i-=1;
    leap = i;
    heap[1] = heap[leap];
    while(cost[heap[leap]] > cost[heap[leap*2]] || cost[heap[leap*2+1]]) {
        if(cost[heap[leap*2+1]] == -1 || cost[heap[leap*2+1]] > cost[heap[leap]]) {
            leap = leap*2+1;
        }
        else
            leap *= 2;
    }
}
