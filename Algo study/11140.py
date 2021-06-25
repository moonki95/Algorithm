import string

n = int(input())

def solution(word):
    if "lol" in word:
        return 0
    elif "lo" in word or "ol" in word or "ll" in word or any("l" + i + "l" in word for i in string.ascii_lowercase):
        return 1
    elif "l" in word or "o" in word:
        return 2
    else:
        return 3
for _ in range(n):
    word = input()
    print(solution(word))