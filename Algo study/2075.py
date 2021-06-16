import heapq
import sys

n = int(input())
graph = []
for _ in range(n):
    li = list(map(int,sys.stdin.readline().rstrip().split()))

    if not graph:
        for i in li:
            heapq.heappush(graph, i)
    else:
        for i in li:
            if graph[0] < i:
                heapq.heappop(graph)
                heapq.heappush(graph,i)
print(graph[0])
