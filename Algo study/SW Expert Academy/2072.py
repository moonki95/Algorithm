#2072. 홀수만 더하기

n = int(input())
for i in range(n):
    ans = 0
    li = list(map(int,input().split()))
    for j in li:
        if j % 2 == 1:
           ans += j

    print("#"+str(i+1)+" " +str(ans))