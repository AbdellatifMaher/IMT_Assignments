x=int(input("Enter any Number : "))
y=int(input("Enter nth bit to check(0-31): "))
z = x | (1<<y)
print("Bit Set Successfully")
print("Number before Setting ",y,"th bit : ",x)
print("Number after Setting ",y,"th bit : ",z)