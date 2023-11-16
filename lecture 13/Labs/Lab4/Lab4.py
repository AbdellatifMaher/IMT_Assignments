i = 0
j = 0
while i<3 :
	x=input("Please Enter Your Name : ")
	if x == "Ahmed" :
		while j<3 : 
			y = input("Please Enter Your Password : ")
			if y == "1394" :
				print("Welcome back,"+x)
				break
			else:
				print("Incorrect Password")
				j+=1
		break
	
	elif x == "Ali" :
		while j<3 : 
			y = input("Please Enter Your Password : ")
			if y == "6078" :
				print("Welcome back,"+x)
				break
			else:
				print("Incorrect Password")
				j+=1
		break
	elif x == "Amr"	:
		while j<3 : 
			y = input("Please Enter Your Password : ")
			if y == "9345" :
				print("Welcome back,"+x)
			else:
				print("Incorrect Password")
				j+=1
		break
	else:
		print("Incorrect Username")
		i+=1