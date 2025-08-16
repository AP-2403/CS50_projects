def convert(st):
    st=st.replace(":)","🙂")
    st=st.replace(":(","🙁")
    return st
def main():
    st=input("")
    st=convert(st)
    print(st)
if __name__=="__main__":
    main()
