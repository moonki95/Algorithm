import sys
from collections import deque


def graph_init():
    max_num = 0
    for i in range(n):
        graph.append(list(map(int, input().split())))
        max_num = max(max_num, max(graph[i]))
    return max_num


def input():
    return sys.stdin.readline().rstrip()


def bfs(depth, a, b):
    queue = deque()
    queue.append([a, b])

    dx = [0, 0, 1, -1]
    dy = [1, -1, 0, 0]
    while queue:
        x, y = queue.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if 0 <= nx < n and 0 <= ny < n:
                if graph[nx][ny] > depth and not visited[nx][ny]:
                    queue.append([nx, ny])
                    visited[nx][ny] = 1


n = int(input())

graph = []

num = graph_init()
res = []
for i in range(num+1):
    visited = [[0] * n for _ in range(n)]
    ans = 0
    max_ans = 0
    for j in range(n):
        for k in range(n):
            if not visited[j][k] and graph[j][k] > i:
                bfs(i, j, k)
                ans += 1
    res.append(ans)

print(max(res))
