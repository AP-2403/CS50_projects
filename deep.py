ans=input("What is the Answer to the Great Question of Life, the Universe, and Everything?: ")
ans=ans.replace(" ","")
ans=ans.lower()
if ans=="42" or ans=="forty-two" or ans=="fortytwo":
    print("Yes")
else:
    print("No")
