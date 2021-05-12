moeum = ['a','e','i','o','u']
jaeum = ['b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z']
while True:
    n=input()
    ans = 0
    flag = True
    if n == "end":
        break
    for i in range(len(n)):

        #1. 모음 하나를 반드시 포함
        if n[i] in moeum:
            ans += 1

        #3. 같은글자가 연속적으로 두번이상 오면 안되나, ee와 oo는 허용
        if i>=1 and ((n[i] in moeum and n[i-1]==n[i]) or (n[i] in jaeum and n[i-1]==n[i])):
            if (n[i] == 'e' and n[i-1] == 'e') or (n[i] == 'o' and n[i-1] == 'o'):
                flag = True
            else:
                flag = False
                break

        #2. 모음이 3개 혹은 자음이 3개 연속으로 오면 안된다.
        if i>=2 and ((n[i] in moeum and n[i-1] in moeum and n[i-2] in moeum) or (n[i] in jaeum and n[i-1] in jaeum and n[i-2] in jaeum)):
            flag = False
            break

    if ans == 0 or not flag:
        print("<"+n+">"+" is not acceptable.")
    else:
        print("<"+n+">"+" is acceptable.")
