from collections import Counter

n = int(input())
li = []
ans = []
for i in range(n):
    word = input()
    li.append(word[0])
num = Counter(li)

for i,j in num.items():
    if j >= 5:
        ans.append(i)
ans.sort()
if len(ans) == 0:
    print("PREDAJA")
else:
    for i in range(len(ans)):
        print(ans[i],end='')