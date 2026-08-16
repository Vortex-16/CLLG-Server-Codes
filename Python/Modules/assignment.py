'''
Create a module which contains the functions as stated below.
a) F(x,y)=F(x-y,y)+1, if y ≤ x
b) F(n,r)=F(n-1,r)+F(n-1,r-1)
c) F(n)=F(n/2)+1 if n>1
d) F(M,N)=1 if M=0, or M ≥N ≥1, and F(M,N)=F(M-1,N)+F(M-1,N-1), otherwise.
'''
def f1(x,y):
    if y<=x:
        return f1(x-y,y)+1
    return 1
def f2(n,r):
    if n>0 and r>0:
        return (f2(n-1,r)+f2(n-1,r-1))
    else:
        return n+r
def f3(n):
    if n>1:
        return f3(n/2)+1
    return 0
def f4(m,n):
    if m==0 or (m>=n and n>=1):
        return 1
    else:
        return f4(m-1,n)+f4(m-1,n-1)
    