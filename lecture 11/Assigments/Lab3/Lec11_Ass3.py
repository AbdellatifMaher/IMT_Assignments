mathsub=int(input("enter the degree of course one :"))
pysub=int(input("enter the degree of course one :"))
chemsub=int(input("enter the degree of course one :"))
Total = mathsub + pysub + chemsub 
if Total >=180 or (mathsub >=65 and Total >=140) :
	print("the candidate is eligible for admission")    
else:
	print("the candidate is not eligible for admission")