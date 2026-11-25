
Book = []
t = int(input())
for i in range(t):
    temp_length = int(input())
    temp_value = list(map(int, input().split()))
    Book.append([temp_length,temp_value])

for j in range(t):
    work_list = sorted(Book[j][1])
    for i in range(Book[j][0]-1,0,-1):
        if(work_list[i]==work_list[i-1]):
            work_list.append(work_list[i-1])
            work_list.pop(i-1)
    left = 0
    right = 1
    for i in range(Book[j][0]-1):
        right = Book[j][0]
        if work_list[i]>=work_list[i+1]:
            right = i+1
            break
    for i in range(Book[j][0]-1):
        left = Book[j][0]
        if (work_list[Book[j][0]-1-i]>=work_list[Book[j][0]-2-i]):
            left = i+1
            break
    if(right == Book[j][0] or left == Book[j][0]):
        print(Book[j][0])
    else:
         print(abs(right+left))
    for i in work_list:
        print(i,"",end="")
    print()
    

            

    

