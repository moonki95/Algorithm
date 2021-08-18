a, b, v = map(int, input().split())
status = 0
day = 0

temp = (v - a) % (a - b)
temp_day = (v - a) // (a - b)
if temp == 0:
    day = temp_day + 1
    print(day)
elif temp != 0:
    day = temp_day + 2
    print(day)