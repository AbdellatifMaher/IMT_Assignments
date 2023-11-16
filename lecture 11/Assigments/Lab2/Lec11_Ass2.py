

a=int(input("Enter The Value a : "))
b=int(input("Enter The Value b : "))
c=int(input("Enter The Value c : "))

if a == 0 and b == 0 :
	print("No Solution")
elif ((b**2) - (4*a*c)) < 0 :
	print("No Roots")
elif a == 0 :
	print("X = ",(-c/b))
else :
	x=(-b + (((b**2) - (4*a*c))**0.5))/2*a
	y=(-b - (((b**2) - (4*a*c))**0.5))/2*a
	print("X = ",x)
	print("Y = ",y)

