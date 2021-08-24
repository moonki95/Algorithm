import sys

height = []


def input():
    return sys.stdin.readline().rstrip()


for _ in range(9):
    height.append(int(input()))

number = sum(height)
num1 = 0
num2 = 0
for i in range(0,8):
    for j in range(i+1,9):
        if number - (height[i] + height[j]) == 100:
            num1 = height[i]
            num2 = height[j]
            break

height.sort()
height.remove(num1)
height.remove(num2)
for i in height:
    print(i)