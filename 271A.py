year = int(input())
year_ex = 0
def check_same(a):
    a = str(a)
    seen = {}
    for i in a:
        if(i not in seen):
            seen[i] = 1
        else:
            return False
    return True


while True:
    year_ex = year+1
    if check_same(year_ex):
        print(year_ex)
        break
    year = year_ex