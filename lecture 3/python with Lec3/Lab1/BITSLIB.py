def SET_BIT(number,bit) :
	number = (number) |(1<<bit)
	return number 
def CLEAR_BIT(number,bit) :
	number = (number) &(~(1<<bit))
	return number
def TOG_BIT(number,bit) :
	number = (number) ^(1<<bit)
	return number 
def GET_BIT(number,bit) :
	number = ((number) & (1<<bit))>>bit 
	return number	