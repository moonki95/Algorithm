import sys
from collections import deque


def bfs(x, y):
    queue = deque()
    queue.append(x)
    ans = 0
    while queue:
        for i in range(len(queue)):
            num = queue.popleft()
            if num == y:
                return ans
            for j in range(1,n+1):
                if graph[num][j] == 1 and not visited[j]:
                    queue.append(j)
                    visited[j] = 1
        ans += 1
    return -1


def input():
    return sys.stdin.readline().rstrip()


n = int(input())
a, b = map(int, input().split())
graph = [[0] * (n + 1) for _ in range(n + 1)]
visited = [0] * (n+1)
num = int(input())

for _ in range(num):
    v1, v2 = map(int, input().split())
    graph[v1][v2] = graph[v2][v1] = 1

print(bfs(a, b))
