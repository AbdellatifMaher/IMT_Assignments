x=int(input("Enter any Number : "))
y=int(input("Enter nth bit to check(0-31): "))
z = x & (~(1<<y))
print("Bit Clear Successfully")
print("Number before Clearing ",y,"th bit : ",x)
print("Number after Clearing ",y,"th bit : ",z)