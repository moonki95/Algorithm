n, m = map(int, input().split())

A = list(map(int, input().split()))
B = list(map(int, input().split()))
li = sorted(A + B)
for i in li:
    print(i, end=' ')
