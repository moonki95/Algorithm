n = int(input())
to_find = int(input())
graph = [[0] * n for _ in range(n)]
direction = 1
num = 1
graph[n // 2][n // 2] = num
x = n // 2
y = n // 2
count = 1
ans = 0
while num != n * n:
    if direction == 1:
        for i in range(count):
            x -= 1
            num += 1
            graph[x][y] = num
            if num == n * n:
                break
        direction = 2
    elif direction == 2:
        for i in range(count):
            y += 1
            num += 1
            graph[x][y] = num
        direction = 3
        count += 1
    elif direction == 3:
        for i in range(count):
            x += 1
            num += 1
            graph[x][y] = num
        direction = 4
    elif direction == 4:
        for i in range(count):
            y -= 1
            num += 1
            graph[x][y] = num
        direction = 1
        count+=1

for i in range(n):
    for j in range(n):
        print(graph[i][j], end=' ')
    print()

for i in range(n):
    for j in range(n):
        if graph[i][j] == to_find:
            print(i+1,j+1)
            break