import sys
from collections import deque

flag = False
p_stack = deque() # <> 괄호문자열 들어갔을때 스택
o_stack = deque() # <> 일반 문자만 있을때 스택
ans = ""
word = sys.stdin.readline().strip()

for i in range(len(word)):
    if word[i] == '<':
        flag = True
        if len(o_stack) != 0:
            while o_stack:
                ans += o_stack.pop()
        p_stack.append(word[i])
    elif word[i] == '>':
        flag = False
        p_stack.append(word[i])
        while p_stack:
            ans += p_stack.popleft()
    elif word[i] == " " and not flag:
        while o_stack:
            ans += o_stack.pop()
        ans += " "
        o_stack.clear()
    elif word[i] == " " and flag:
        p_stack.append(word[i])
    elif i + 1 == len(word):
        o_stack.append(word[i])
        while o_stack:
            ans += o_stack.pop()
    else:
        if flag:
            p_stack.append(word[i])
        else:
            o_stack.append(word[i])
print(ans)