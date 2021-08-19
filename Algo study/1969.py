from collections import Counter
n,m = map(int,input().split())
DNA = []
for _ in range(n):
    word = input()
    DNA.append(word)

ans = ""
res = 0
for i in range(m):
    temp = []
    for j in range(n):
        temp.append(DNA[j][i])
    temp.sort()
    word = Counter(temp).most_common()[0][0]
    for k in range(n):
        if word != temp[k]:
            res += 1
    ans += word

print(ans)
print(res)