import sys

word = sys.stdin.readline().strip()
li = []
for i in range(1,len(word)+1):
    for j in range(len(word) - i + 1):
        li.append(word[j:j+i])

print(len(set(li)))