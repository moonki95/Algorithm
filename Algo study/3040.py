li = []
for _ in range(9):
    li.append(int(input()))

num = sum(li)
a,b = 0,0
for i in range(9):
    for j in range(i+1,9):
        if (num - (li[i] + li[j])) == 100:
            a = li[i]
            b = li[j]
            break

li.remove(a)
li.remove(b)

for i in range(len(li)):
    print(li[i])