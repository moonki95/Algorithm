import heapq

n = int(input())
m = int(input())

li = []

for i in range(n-1):
    heapq.heappush(li,-int(input()))
ans = 0
while li:
    num = heapq.heappop(li)
    if m > -num:
        break
    m += 1
    ans += 1
    heapq.heappush(li,num+1)
print(ans)