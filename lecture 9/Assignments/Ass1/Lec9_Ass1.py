x=int(input("Enter any Number : "))
y=int(input("Enter nth bit to check(0-31): "))
x= (x & (1<<y))>>y
print("the ",y," bit is set to ",x)