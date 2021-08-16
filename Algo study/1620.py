n, m = map(int, input().split())

poke_name = {}
poke_number = {}
for i in range(1,n+1):
    name = input()
    poke_name[name] = i
    poke_number[i] = name

for i in range(m):
    word = input()
    if word.isdigit():
        print(poke_number[int(word)])
    else:
        print(poke_name[word])
