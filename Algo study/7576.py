import sys
from collections import deque


def init_graph():
    for _ in range(m):
        graph.append(list(map(int, input().split())))


def input():
    return sys.stdin.readline().rstrip()


def bfs(queue):
    dx = [0, 0, 1, -1]
    dy = [1, -1, 0, 0]
    ans = -1
    while queue:
        ans += 1
        for a in range(len(queue)):
            x, y = queue.popleft()

            for i in range(4):
                nx = x + dx[i]
                ny = y + dy[i]

                if 0 <= nx < m and 0 <= ny < n:
                    if graph[nx][ny] == 0 and not graph[nx][ny]:
                        queue.append([nx, ny])
                        graph[nx][ny] = 1

    for a in graph:
        if 0 in a:
            return -1
    return ans


n, m = map(int, input().split())
graph = []
init_graph()
res = 0
queue1 = deque()

for i in range(m):
    for j in range(n):
        if graph[i][j] == 1:
            queue1.append([i, j])

print(bfs(queue1))
