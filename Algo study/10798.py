li = []
ans = ""
for _ in range(5):
    li.append(input())
num = 0
for i in range(5):
    if len(li[i]) > num:
        num = len(li[i])

for i in range(num):
    for j in range(5):
        try:
            print(li[j][i],end='')
        except:
            print("",end='')