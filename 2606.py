import sys
from collections import deque

n = int(sys.stdin.readline())
m = int(sys.stdin.readline())
net = [[False for _ in range(n+1)] for _ in range(n+1)]
infect = [False for _ in range(n+1)]

for i in range(m):
    y,x = map(int,sys.stdin.readline().split())
    net[y][x] = True
    net[x][y] = True

cnt = 0
q = deque()
q.append(1)
infect[1] = True
while(q):
    next = q.popleft()
    for i in range(1,n+1):
        if net[next][i] and not infect[i]:
            q.append(i)
            infect[i] = True

for i in range(2,n+1):
    if infect[i]:
        cnt += 1
#+1 for com 1
sys.stdout.write(str(cnt))

