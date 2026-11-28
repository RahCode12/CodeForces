
def gcd(a,b):
    if (a==0):
        return b
    elif(b==0):
        return a
    elif(a>b):
        return gcd(a%b,b)
    elif(b>a):
        return gcd(a,b%a)
    else:
        return(a)




t = int(input())

while(t):
    l,a,b = map(int,input().split())
    hash = gcd(a,l)
    hash2 = gcd(b,l)
    print(l//(hash*hash2//gcd(hash,hash2)))
    t -= 1
