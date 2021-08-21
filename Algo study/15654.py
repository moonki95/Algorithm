import sys

n, m = map(int, input().split())
li = list(map(int, input().split()))
li.sort()
ans = []

def input():
    return sys.stdin.readline().rstrip()

def sol():
    if len(ans) == m:
        print(" ".join(map(str, ans)))
        return

    for i in li:
        if i not in ans:
            ans.append(i)
            sol()
            ans.pop()
sol()
