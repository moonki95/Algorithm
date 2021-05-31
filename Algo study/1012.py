from collections import deque

def bfs(graph,i,j):
    num = 0
    if visited[i][j] == 0:
        num += 1
        queue.append([i, j])
        visited[i][j] = 1
    else:
        return 0
    while queue:
        a, b = queue.popleft()
        for i in range(4):
            nx = a + dx[i]
            ny = b + dy[i]

            if 0 <= nx < m and 0 <= ny < n and graph[nx][ny] == 1 and visited[nx][ny] == 0:
                queue.append([nx, ny])
                visited[nx][ny] = 1
    return num
t = int(input())

dx = [0,0,-1,1]
dy = [1,-1,0,0]

for _ in range(t):
    m, n, k = map(int, input().split())
    res = 0
    queue = deque()
    graph = [[0] * n for _ in range(m)]
    visited = [[0] * n for _ in range(m)]
    for _ in range(k):
        a,b = map(int, input().split())
        graph[a][b] = 1

    for i in range(m):
        for j in range(n):
            if graph[i][j] == 1:
                res += bfs(graph,i,j)

    print(res)

"""

"""