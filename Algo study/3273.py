n = int(input())
li = list(map(int, input().split()))
x = int(input())
li.sort()
left = ans = 0
right = n - 1
while True:
    if left >= right:
        break
    if li[left] + li[right] == x:
        ans += 1
        left += 1
        right -= 1
    elif li[left] + li[right] < x:
        left += 1
    elif li[left] + li[right] > x:
        right -= 1

print(ans)
