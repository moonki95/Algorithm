n = int(input())
li = []
for _ in range(n):
    li.append(list(map(str,input())))
for i in range(len(li)):
    li[i].sort()

myli = []

for i in range(n):
    myli.append("".join(li[i]))

print(len(set(myli)))
