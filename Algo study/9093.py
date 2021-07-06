#9093 단어 뒤집기

n = int(input())
for _ in range(n):
    ans = ""
    word = list(map(str,input().split()))
    for i in range(len(word)):
        ans += word[i][::-1]
        ans += " "
    print(ans)