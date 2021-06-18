e,f,c = map(int,input().split())

ans = 0
num = e+f
res = 0
while True:
    ans += num // c
    res += num % c
    num = num // c
    if res > 0:
        num += res
        res = 0
    if num <= c-1:
        break
print(ans)