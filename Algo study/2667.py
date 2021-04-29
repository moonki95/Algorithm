from collections import deque
import sys

n = int(input())

graph = [list(map(int,input())) for _ in range(n)]
visited = [[0] * n for _ in range(n)]
dx = [0,0,1,-1]
dy = [1,-1,0,0]
ans = []

def bfs(x,y):
    queue = deque()
    queue.append((x,y))
    graph[x][y] = 0
    area = 1
    while queue:
        x,y = queue.popleft()
        for i in range(4):
            nx,ny = x+dx[i] , y+dy[i]

            if 0<=nx<n and 0<=ny<n:
                if graph[nx][ny] == 1:
                    queue.append((nx,ny))
                    graph[nx][ny] = 0
                    area += 1

    ans.append(area)


for i in range(n):
    for j in range(n):
        if graph[i][j] == 1:
            bfs(i,j)

print(len(ans))
for i in sorted(ans):
    print(i)