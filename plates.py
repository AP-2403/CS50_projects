def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")


def is_valid(s):
    if 2<=len(s)<=6 and s[:2].isalpha() and s.isalnum() and no_middle_num(s):
        return True
    else:
        return False


def no_middle_num(s):
    temp=0
    check=True
    l=len(s)
    i=0
    for i in range(l):
        if temp==0 and s[i].isnumeric():
            if s[i]=='0':
                check=False
                break
            temp=1
            check=True
        elif temp==1 and s[i].isalpha():
            check=False
    return check


main()
