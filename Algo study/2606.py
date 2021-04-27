from collections import deque

num = int(input())

line = int(input())
graph = [[0] * (num+1) for _ in range(num+1)]
visited = [False for _ in range(num+1)]
res = 0
for i in range(line):
    v1, v2 = map(int,input().split())
    graph[v1][v2] = 1
    graph[v2][v1] = 1

queue = deque()
queue.append(1)
visited[1] = True

while queue:

    v = queue.popleft()
    for i in range(1,num+1):
        if graph[v][i] == 1 and visited[i] == 0:
            queue.append(i)
            visited[i] = True
            res+=1

print(res)