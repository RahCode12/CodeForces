in_string = input()
L_count = 0
U_count = 0
for i in in_string:
    if(i.isupper()):
        U_count += 1
    else:
        L_count += 1

if(L_count>=U_count):
    print(in_string.lower()) 
else:
    print(in_string.upper())