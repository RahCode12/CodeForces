in_string = input()
in_string = in_string.lower()
temp_list = list(in_string)

for i in in_string:
    if i in ['a','e','y','o','u','i']:
        temp_list.remove(i)

in_string = ''
for i in temp_list:
    in_string += '.'+i
print(in_string)
             