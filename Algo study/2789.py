word = input()
li = ['C','A','M','B','R','I','D','G','E']
ans = ""
for i in word:
    if i not in li:
        ans += i
print(ans)