x=int(input("Please Enter The loan Value : "))
y=int(input("Please Enter The Number of Years : "))
if y<6:
	z = (0.12 * y * x ) + x
	z/=y*12
	print(z)
else:
	z = (0.15 * y * x ) + x
	z/=y*12 
	print(z)
