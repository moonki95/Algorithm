num = int(input())

for i in range(num):
    number = int(input())
    word = []
    for j in range(number):
        word.append(list(map(str,input().split())))

    word.sort(key = lambda x:-int(x[0]))
    print(word[0][1])