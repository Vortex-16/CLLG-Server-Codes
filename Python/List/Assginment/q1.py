st=input("Enter your string: ")
alpha=[]
for i in st:
    alpha+=i
# print(alpha)
ch=0
alpha.sort()
fre={}
for i in alpha:
    if i in fre:
        fre[i]+=1
    else:
        fre[i]=1

print(fre)