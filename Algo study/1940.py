n = int(input())
m = int(input())

li = list(map(int, input().split()))
li.sort()
left = res = 0
right = n - 1

while True:
    if left >= right:
        break
    if li[left] + li[right] < m:
        left += 1
    elif li[left] + li[right] > m:
        right -= 1
    elif li[left] + li[right] == m:
        res += 1
        left += 1
        right -= 1

print(res)