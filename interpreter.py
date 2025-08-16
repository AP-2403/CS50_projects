eqn=input("Expression: ")
eqn=eqn.replace(" ","")
a=float(eqn[0])
b=float(eqn[2])
c=0
if eqn[1]=="+":
    c=a+b
elif eqn[1]=="-":
    c=a-b
elif eqn[1]=="*":
    c=a*b
elif eqn[1]=="/":
    c=a/b
else:
    print("Wrong input")
print(c)

