n = int(input())
test_case = []
min = 0
hash = 0
for i in range(n):
    a,b = map(int,input().split())
    hash = hash+ b-a
    if(hash>min):
        min = hash
print(min)


