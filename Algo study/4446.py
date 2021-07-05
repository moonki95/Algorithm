li1 = ['a','i','y','e','o','u','a','i','y']
li2 = ['A','I','Y','E','O','U','A','I','Y']
li3 = ['b' ,'k', 'x', 'z', 'n', 'h', 'd', 'c', 'w', 'g', 'p', 'v', 'j', 'q', 't', 's', 'r', 'l', 'm', 'f','b' ,'k', 'x', 'z', 'n', 'h', 'd', 'c', 'w', 'g']
li4 = ['B','K','X','Z','N','H','D','C','W','G','P','V','J','Q','T','S','R','L','M','F','B','K','X','Z','N','H','D','C','W','G']
while True:
    try:
        word = input()
        ans = ""
        for i in range(len(word)):
            if word[i] in "aiyeou":
                ans += li1[li1.index(word[i])+3]
            elif word[i] in "AIYEOU":
                ans += li2[li2.index(word[i])+3]
            elif word[i] in "bkxznhdcwgpvjqtsrlmf":
                ans += li3[li3.index(word[i])+10]
            elif word[i] in "BKXZNHDCWGPVJQTSRLMF":
                ans += li4[li4.index(word[i])+10]
            else:
                ans += word[i]
    except EOFError:
        break

    print(ans)