import mod2

print("This is pattern module")
print("Enter 1 for star pattern")
print("Enter 2 for number pattern")
choice=int(input("Enter your choice: "))
n=int(input("Enter number of rows: "))
if choice==1:
    for i in range(1, n + 1):
        print(mod2.star(i))
elif choice==2:
    for i in range(1, n + 1):
        print(mod2.num(i))
else:
    print("Invalid choice")