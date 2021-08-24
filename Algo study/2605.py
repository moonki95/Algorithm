import sys


def input():
    return sys.stdin.readline().rstrip()


num = int(input())
li = list(map(int, input().split()))
answer = []

for i in range(num):
    answer.insert(li[i],i+1)

for i in reversed(answer):
    print(i, end =' ')