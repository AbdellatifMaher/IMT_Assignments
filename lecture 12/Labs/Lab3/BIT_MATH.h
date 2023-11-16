

#define SET_BIT(Var,Bitno)   (Var |= (1<<Bitno))
#define CLR_BIT(Var,Bitno)   (Var &= (~(1<<Bitno))
#define TOG_BIT(Var,Bitno)   (Var ^= (1<<Bitno))
#define GET_BIT(Var,Bitno)   ((Var>>Bitno)& 1)
