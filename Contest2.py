t = int(input())

while(t):
    n,k,p = map(int,input().split())
    point = input().split(" ")
    for i in range(len(point)):
        point[i] = int(point[i])
    point.sort()
    count = k
    Sum = 0 
    while(True):
        Sum = sum(point[count-k:count])
        if(Sum < ((count//k)*p) and count<=n):
            count += k
        else:
            count -= k
            break
    max = sum(point[count:])+(count//k)*p
    print(max)
    t-=1
