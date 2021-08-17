import sys

NUMBER = 1000000
n = int(input())
Prime = [True] * (NUMBER+1)

li = list(map(int, sys.stdin.readline().split(' ')))
li.sort()
for i in range(2, int(NUMBER ** 0.5)+1):
    if Prime[i] == True:
        j = 2
        while i * j <= li[-1]:
            Prime[i * j] = False
            j += 1
ans = []
for i in li:
    if Prime[i]:
        ans.append(i)
num = 1

if len(ans) == 0:
    print("-1")
else:
    for i in set(ans):
        num *= i
    print(num)
