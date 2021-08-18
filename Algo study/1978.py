def era():
    for i in range(2,int(1001 ** 0.5) + 1):
        if Prime[i] == True:
            j = 2
            while i * j <= li[-1]:
                Prime[i*j] = False
                j += 1
n = int(input())
ans = 0
li = list(map(int, input().split()))
li.sort()
Prime = [True] * 1001
era()

for i in li:
    if i == 1:
        continue
    if Prime[i] == True:
        ans += 1
print(ans)