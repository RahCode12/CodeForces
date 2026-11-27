a = int(input())
string = input()
flag = True

while(flag):
    for i in string:
        if i == '1':
            print("HARD")
            flag = False
            break
    if(flag):
        print("EASY")
    break
