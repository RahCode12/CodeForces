input()
string = input()
string = list(string)
A = string.count("A")
B = string.count("D")
if A > B:
    print("Anton")
elif A == B:
    print("Friendship")
else:
    print("Danik")