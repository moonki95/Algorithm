n, m = map(int, input().split())

li = list(map(int, input().split()))

left = right = sum = 0
res = 1000000001
flag = False
while True:
    # 탈출 조건
    if left == n:
        break

    if sum >= m:
        sum -= li[left]
        left += 1
        res = min(res, right - left + 1)
        flag = True
    else:
        if right == n:
            break
        else:
            sum += li[right]
            right += 1

if not flag:
    print("0")
else:
    print(res)
