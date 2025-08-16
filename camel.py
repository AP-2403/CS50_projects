camel=input("camelCase: ")
snake=""
for c in camel:
    if(c.isupper()):
        snake= snake +"_"+ c.lower()
    else:
        snake= snake+c
print(f"snake_case: {snake}")

