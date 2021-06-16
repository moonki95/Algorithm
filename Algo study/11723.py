import sys

n = int(sys.stdin.readline())
li = set()
for _ in range(n):
    word = sys.stdin.readline().rstrip().split()

    if len(word) == 1:
        if word[0] == "all":
            li = set([i for i in range(1,21)])
        else:
            li = set()
    else:
        if word[0] == "add":
            li.add(int(word[1]))
        elif word[0] == "check":
            if int(word[1]) in li:
                print("1")
            else:
                print("0")
        elif word[0] == "remove":
            li.discard(int(word[1]))
        elif word[0] == "toggle":
            if int(word[1]) in li:
                li.discard(int(word[1]))
            else:
                li.add(int(word[1]))
