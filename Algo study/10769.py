emoticon = [":-)",":-("]

word = input()

first = word.count(emoticon[0])
second = word.count(emoticon[1])

if first == 0 and second == 0:
    print("none")
else:
    if first == second:
        print("unsure")
    elif first > second:
        print("happy")
    elif first < second:
        print("sad")