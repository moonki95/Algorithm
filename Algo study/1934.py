tc = int(input())

def gcd(a, b):
    while max(a, b):
        try:
            a, b = b, a % b
        except:
            return a


def lcm(a, b):
    return a * b // gcd(a, b)


for _ in range(tc):
    a, b = map(int, input().split())
    num = lcm(a,b)
    print(num)
