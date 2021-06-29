def gcd(a,b):
    while max(a,b):
        try:
            a,b = b, a%b
        except:
            return a
    print()
def lcm(a,b):
    return a * b // gcd(a,b)

n,m = map(int,input().split())

print(gcd(n,m))
print(lcm(n,m))