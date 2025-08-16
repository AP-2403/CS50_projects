vow=['a','e','i','o','u']
line=input("Input: ")
for l in line:
    if l.lower() in vow:
        line=line.replace(l,"")
print(f"Output: {line}")
