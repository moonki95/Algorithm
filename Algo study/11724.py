from collections import deque

def bfs(start):
    queue = deque()
    queue.append(start)
    visited[start] = 1
    while queue:
        num = queue.popleft()

        for i in range(1, n + 1):
            if graph[num][i] == 1 and not visited[i]:
                queue.append(i)
                visited[i] = 1

n, m = map(int, input().split())
num1 = 0
num2 = 0
graph = [[0] * (n + 1) for _ in range(n + 1)]
visited = [0] * (n + 1)
ans = 0
for i in range(m):
    v1, v2 = map(int, input().split())
    graph[v1][v2] = graph[v2][v1] = 1

for i in range(1, n + 1):
    if not visited[i]:
        bfs(i)
        ans += 1

print(ans)