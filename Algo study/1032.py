num = int(input())

word = list(input() for _ in range(num))
ans = ""
for i in range(len(word[0])):
    flag = True
    cmp = word[0][i]
    for j in range(len(word)):
        if word[j][i] == cmp:
            flag = True
        else:
            flag = False
            break
    if flag:
        ans += word[0][i]
    else:
        ans += "?"
print(ans)