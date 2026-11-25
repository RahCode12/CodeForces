input_string = input("Enter the string: ")
List = list(input_string)
Map = {}
for i in List:
    if(i not in Map.keys()):
        Map[i] = 1
    else:
        Map[i] += 1

for i in Map.keys():
    if Map[i]>1:
        print(i,"-",Map[i])
