n, m = map(int, input().split())

li = list(map(int, input().split()))

left = 0
right = 0
res = 0
sum = 0
while True:
    print(left,right,sum)
    if left == n:
        break
    if sum >= m:
        sum -= li[left]
        left += 1
    else:
        if right == n:
            break
        sum += li[right]
        right += 1
    if sum == m:
        res += 1
print(res)
