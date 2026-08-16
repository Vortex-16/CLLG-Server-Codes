import assignment as mf
while(1):
    print("Press i to access function number i(eg:-1 for fun1)\nPress 5 to exit")
    c=int(input())
    if c==1:
        print("Enter x and y:")
        x,y=input().split()
        x=int(x)
        y=int(y)
        print("Result=",mf.f1(x,y))
    elif c==2:
        print("Enter n and r:")
        n,r=input().split()
        n=int(n)
        r=int(r)
        print("Result=",mf.f2(n,r))
    elif c==3:
        n=int(input("Enter n:"))
        print("Result=",mf.f3(n))
    elif c==4:
        print("Enter m and n")
        m,n=input().split()
        m=int(m)
        n=int(n)
        print("Result=",mf.f4(m,n))
    elif c==5:
        print("Thanks")
        break
    else:
        print("Wrong input")


'''
Press i to access function number i(eg:-1 for fun1)
Press 5 to exit
1
Enter x and y:
7 4
Result= 2
Press i to access function number i(eg:-1 for fun1)
Press 5 to exit
2
Enter n and r:
4 9
Result= 112
Press i to access function number i(eg:-1 for fun1)
Press 5 to exit
3 
Enter n:5
Result= 3
Press i to access function number i(eg:-1 for fun1)
Press 5 to exit
4
Enter m and n
9 2
Result= 1
Press i to access function number i(eg:-1 for fun1)
Press 5 to exit
5
Thanks
'''
