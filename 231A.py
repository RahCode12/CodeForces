n = int(input())
cout = 0

for i in range(n):
    a,b,c = map(int,input().split())
    if(a+b+c>=2):
        cout += 1

print(cout)