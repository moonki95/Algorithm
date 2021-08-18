n, m = map(int, input().split())

li = [True] * 1000001
li[0] = False
li[1] = False
for i in range(2, int(1000001 ** 0.5)+1):
    if li[i]:
        j = 2
        while i * j < 1000001:
            li[i * j] = False
            j += 1

for i in range(n,m+1):
    if li[i]:
        print(i)