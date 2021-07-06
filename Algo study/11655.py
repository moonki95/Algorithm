# 11655 ROT13

word = input()
ans = ""

for i in range(len(word)):
    if word[i].isalpha():
        myword = chr(ord(word[i]) + 13)
        if word[i].isupper():
            if myword >= '[':
                myword = chr(ord(myword) - 26)
        elif word[i].islower():
            if myword >= '{':
                myword = chr(ord(myword) - 26)
        ans += myword
    else:
        ans += word[i]

print(ans)