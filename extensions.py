f=input("File name: ")
f=f.replace(" ","")
typ=""
i=0
for x in f:
    i+=1
    if x==".":
        typ=f[i:]
typ=typ.lower()
typfil={
    "gif":"image/gif",
    "jpg":"image/jpeg",
    "jpeg":"image/jpeg",
    "png":"image/png",
    "pdf":"application/pdf",
    "txt":"text/plain",
    "zip":"application/zip"
}
out=""
for x,y in typfil.items():
    if x == typ:
        out=y
        break
if out=="":
    print("application/octet-stream")
else:
    print(out)
