n = int(input())

li = [input() for _ in range(n)]

row, col = 0, 0

#가로
for i in range(len(li)):
    count = 0
    for j in range(len(li[i])):
        if li[i][j] == '.':
            count+=1
            if j == len(li[i]) - 1:
                if count >= 2:
                    row += 1
        elif li[i][j] == 'X':
            if count >= 2:
                row += 1
            count = 0
#세로
for i in range(len(li)):
    count = 0
    for j in range(len(li[i])):
        if li[j][i] == '.':
            count+=1
            if j == len(li[i]) - 1:
                if count >= 2:
                    col += 1
        elif li[j][i] == 'X':
            if count >= 2:
                col += 1
            count = 0

print(row,col)
