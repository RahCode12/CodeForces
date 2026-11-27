t = int(input())
L = [0,0,0]
while(t):
    x,y,z = map(int, input().split())
    L[0] += x
    L[1] += y
    L[2] += z
    t -= 1

if(L[0] == 0 and L[1] ==0 and L[2]==0 ):
    print("YES")
else:
    print("NO")