num = int(input())
ans = 0
word = input()
hidden = []


for i in range(len(word)):
    if word[i].isdigit():
        if len(hidden) >= 6:
            continue
        else:
            hidden.append(word[i])
    else:
        if len(hidden) == 0:
            continue
        else:
            ans += int("".join(hidden))
            hidden.clear()

if len(hidden) != 0:
    ans += int("".join(hidden))


print(ans)