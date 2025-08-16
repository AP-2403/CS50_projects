while True:
    try:
        x=input("Fraction: ")
        a,b=x.split('/')
        a=int(a)
        b=int(b)
        c=round((a/b)*100)
        if a<0 or b<0:
             continue
        if c<=1:
            print("E")
        elif a>b:
             continue
        elif c>=99:
            print("F")
        else:
              print(f"{c}%")
        break
    except (ValueError,ZeroDivisionError):
            pass

