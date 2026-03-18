/**
 * import sys

n = int(sys.stdin.readline())
board = [[0 for i in range(n)] for j in range(n)]
for i in range(n):
    board[i] = list(map(int,sys.stdin.readline().split()))

x = 0
y = 0
q = []
q.append((y,x))

while len(q):
    m = q.pop(0)
    x = m[1]
    y = m[0]
    if board[y][x]==-1:
        sys.stdout.writelines("HaruHaru")
        exit(0)
    i = board[y][x]
    if y+i<n:
        q.append((y+i,x))
    if x+i<n:
        q.append((y,x+i))
    
sys.stdout.writelines("Hing")
 */
#include <stdio.h>
typedef struct {
    int x,y;
} pos;

int main(void) {
    int n;
    int board[64][64] = {0};
    int v[64][64] = {0};
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++)
            scanf("%d",&board[i][j]);
    }
    pos cur = {0,0};
    pos q[10000] = {0};
    int f=-1,r=-1;
    int i = 0;
    q[++f] = cur;
    pos t = {0,0};
    v[cur.y][cur.x] = 1;
    while(f!=r) {
        cur = q[++r];
        i = board[cur.y][cur.x];
        if(i==-1) {
            puts("HaruHaru");
            return 0;
        }
        if (cur.y+i<n && !v[cur.y+i][cur.x]) {
            t.y = cur.y+i;
            t.x = cur.x;
            q[++f] = t;
            v[t.y][t.x] = 1;
        }
        if (cur.x+i<n && !v[cur.y][cur.x+i]) {
            t.y = cur.y;
            t.x = cur.x+i;
            q[++f] = t; 
            v[t.y][t.x] = 1;
        }
    }
    puts("Hing");
}