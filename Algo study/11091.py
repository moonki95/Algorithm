import string

num = int(input())

for _ in range(num):
    alpha = []
    str = string.ascii_lowercase
    for i in range(len(str)):
        alpha.append(str[i])
    word = input().lower()
    for j in word:
        if j in alpha:
            alpha.remove(j)

    if len(alpha) == 0:
        print("pangram")
    else:
        print("missing ",end = '')
        print("".join(alpha))
