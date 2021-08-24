import sys


# 왼쪽대각선
def is_cross1():
    for a in range(5):
        if visited[a][a] != 1:
            return 0
    return 1


# 오른쪽 대각선
def is_cross2():
    for a in range(5):
        if visited[a][4 - a] != 1:
            return 0
    return 1


# 가로
def is_width():
    res = 0
    for a in range(5):
        if visited[a].count(1) == 5:
            res += 1
    return res


# 세로
def is_length():
    res = 0
    new_visited = list(map(list, zip(*visited)))
    for a in range(5):
        if new_visited[a].count(1) == 5:
            res += 1
    return res


def sol(num):
    for i in range(5):
        for j in range(5):
            if num == b_chulsu[i][j]:
                visited[i][j] = 1


def input():
    return sys.stdin.readline().rstrip()


answer = 0
b_chulsu = []
flag = False
for _ in range(5):
    b_chulsu.append(list(map(int, input().split())))
visited = [[0] * 5 for _ in range(5)]
bingo = []
for _ in range(5):
    bingo.append(list(map(int, input().split())))

for i in range(5):
    for j in range(5):
        bingo_num = 0
        sol(bingo[i][j])
        bingo_num += is_cross1()
        bingo_num += is_cross2()
        bingo_num += is_width()
        bingo_num += is_length()
        answer += 1
        if bingo_num >= 3:
            flag = True
            break
    if flag:
        break

print(answer)
