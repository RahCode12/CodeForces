n,h = map(int,input().split())
friend = input().split(" ")
count = 0
for i in friend:
    if int(i)>h:
        count += 2
    else:
        count += 1

print(count)

