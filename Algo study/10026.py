from collections import deque
dx = [0,0,1,-1]
dy = [1,-1,0,0]
def bfs(i,j,word):
    queue = deque()
    queue.append((i,j))
    while queue:
        x,y = queue.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if 0 <= nx < n and 0 <= ny < n:
                if not visited[nx][ny] and graph[nx][ny] == word:
                    queue.append((nx,ny))
                    visited[nx][ny] = 1
n = int(input())
graph = [list(input()) for _ in range(n)]
visited = [[0] * n for _ in range(n)]
ans1 = 0
ans2 = 0
for i in range(n):
    for j in range(n):
        if visited[i][j] == 0:
            bfs(i,j,graph[i][j])
            ans1 += 1
for i in range(n):
    for j in range(n):
        if graph[i][j] == 'R':
            graph[i][j] = 'G'
visited = [[0] * n for _ in range(n)]
for i in range(n):
    for j in range(n):
        if visited[i][j] == 0:
            bfs(i,j,graph[i][j])
            ans2 += 1
print(ans1,ans2)