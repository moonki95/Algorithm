word = list(input())

num = 0
flag = 0
ans = 0
for i in range(len(word)):
    if word[i] == 'A':
        num += 3
    elif word[i] == 'B':
        num += 2
    elif word[i] == 'C':
        num += 1
    elif word[i] == 'D':
        num += 2
    elif word[i] == 'E':
        num += 3
    elif word[i] == 'F':
        num += 3
    elif word[i] == 'G':
        num += 3
    elif word[i] == 'H':
        num += 3
    elif word[i] == 'I':
        num += 1
    elif word[i] == 'J':
        num += 1
    elif word[i] == 'K':
        num += 3
    elif word[i] == 'L':
        num += 1
    elif word[i] == 'M':
        num += 3
    elif word[i] == 'N':
        num += 3
    elif word[i] == 'O':
        num += 1
    elif word[i] == 'P':
        num += 2
    elif word[i] == 'Q':
        num += 2
    elif word[i] == 'R':
        num += 2
    elif word[i] == 'S':
        num += 1
    elif word[i] == 'T':
        num += 2
    elif word[i] == 'U':
        num += 1
    elif word[i] == 'V':
        num += 1
    elif word[i] == 'W':
        num += 2
    elif word[i] == 'X':
        num += 2
    elif word[i] == 'Y':
        num += 2
    elif word[i] == 'Z':
        num += 1
ans = num % 10
if ans % 2 == 1:
    print("I'm a winner!")
elif num == 0 or num % 2 == 0:
    print("You're the winner?")