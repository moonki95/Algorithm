from collections import deque


def bfs(start, end):
    queue = deque()
    queue.append(start)

    while queue:
        num = queue.popleft()
        if num == end:
            return visited[num]
        for i in (num + 1, num - 1, num * 2):
            if 0 <= i < LIMIT and not visited[i]:
                queue.append(i)
                visited[i] = visited[num] + 1
    print()


LIMIT = 100001

n, k = map(int, input().split())

visited = [0] * LIMIT

print(bfs(n, k))
