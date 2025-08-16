den1=25
den2=10
den3=5
suma=50
print(f"Amount Due: {suma}")
den_inp=int(input("Insert coin: "))
while suma>0:
    if den_inp in [den1,den2,den3]:
        suma=suma-den_inp
        if suma<=0:
            break
        print(f"Amount Due: {suma}")
        den_inp=int(input("Insert coin: "))
    else:
        print(f"Amount Due: {suma}")
        den_inp=int(input("Insert coin: "))

print(f"Change owed: {abs(suma)}")



