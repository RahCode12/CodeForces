string = input()
t = int(input())
input_list = []

for i in range(t):
    temp = input().split()
    input_list.append([int(temp[0]),int(temp[1])])

prefix_sum_dot = [0] 
prefix_hash_dot = [0]
for i in range(1,len(string)):
    if string[i]==string[i-1]:
        prefix_hash_dot.append(1+prefix_hash_dot[i-1])
    else:
        prefix_hash_dot.append(prefix_hash_dot[i-1])




for i in range(t):
    L = input_list[i][1]
    R = input_list[i][0]
    hash = prefix_hash_dot[L-1]-prefix_hash_dot[R-1]
    print(hash)