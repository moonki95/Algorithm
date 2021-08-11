num = int(input())
li = [i for i in range(1, num + 1)]

left = right = sum = res = 0

while True:
    if left == num:
        break
    # 탈출 조건
    if sum >= num:
        sum -= li[left]
        left += 1
    else:
        if right == num:
            break
        sum += li[right]
        right += 1
    if sum == num:
        res += 1

print(res)