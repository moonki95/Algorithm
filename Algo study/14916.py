n = int(input())
ans = 0
flag = True
while True:
    if n == 0:
        break
    elif n == 1 or n == 3:
        flag = False
        break
    if n % 5 == 0:
        ans += n // 5
        n %= 5
    else:
        n -= 2
        ans += 1

if flag:
    print(ans)
else:
    print("-1")