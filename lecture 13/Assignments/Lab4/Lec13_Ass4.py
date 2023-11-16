n1=int(input("Enter Number 1 : "))
n2=int(input("Enter Number 2 : "))

if n1 >= n2 :
	i = n2 
else :
	i = n1
while i > 0 :
	if (n1%i == 0 and n2%i == 0) : 
			gcd = i 
			break
	i=i-1
print((n1 * n2) /gcd)