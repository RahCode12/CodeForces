num = input()
flag = 0

for i in num:
    if "4" == i or "7" ==i:
        flag += 1

if(flag == 4 or flag == 7):
    print("YES")
else:
    print("NO")
