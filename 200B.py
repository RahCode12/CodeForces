n = int(input())
proportion = list(map(int,input().split()))
total = sum(proportion)
percent = total/n
print(f"{percent:.12f}")