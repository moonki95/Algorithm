from collections import deque

n = int(input())
for _ in range(n):
    res = deque()
    num = int(input())
    li = list(map(str, input().split()))
    res.append(li[0])

    for i in range(1,len(li)):
        if res[0] >= li[i]:
            res.appendleft(li[i])
        else:
            res.append(li[i])

    print("".join(res))