#include <stdio.h>
#include "STD_TYPES.h"
#include <stdlib.h>

typedef struct node {
	
	u32    data        ;
	struct node * next ;
	
}mynode ;


#define null 0 

mynode * Head = null;

void AddFirst( u32 Copy_Data );
void ViewList(void);
void DeleteFirst(void);
void AddLast(u32 Copy_Data);
void DeleteLast(void);

void main(void){

/*	ViewList();

	AddFirst(5);
	AddFirst(6);
	AddFirst(7);
	AddLast(4);
	DeleteFirst();
	DeleteLast();
	ViewList();
	
	AddFirst(10);
	AddFirst(11);
	AddFirst(12);
	AddLast(3);
	DeleteFirst();
	DeleteLast();
	ViewList();*/
	DeleteLast();
	AddFirst(2);
	DeleteLast();
	ViewList();
	AddFirst(5);
	AddFirst(6);
	AddFirst(7);
	AddLast(4);
	ViewList();
	
}


void AddFirst( u32 Copy_Data ){
	
	mynode * ptr = (mynode *)malloc( sizeof(mynode) ) ;
	
	ptr -> data = Copy_Data ;
	ptr -> next = Head      ;
	Head = ptr              ;
	
}

void ViewList(void){
	
	if( Head != null ){
		
		mynode * temp = Head ;
		
		do{
			
			printf("%d\n",temp -> data);
			temp = temp -> next ;
			
		}while( temp != null );
		
	}else{
		printf("Your List Empty \n");
	}
	
	printf("------------------------\n");
	
}

void DeleteFirst(void){
	
	if( Head != null ){
		
		mynode * temp = Head  ;
		Head   = Head -> next ;
		
		free(temp);
		
	}else{
		
		printf("Your List Empty \n");
		
	}
	printf("------------------------\n");
}
void AddLast(u32 Copy_Data)
{
	if(Head != null){
	mynode * ptr=(mynode *)malloc(sizeof(mynode));
	ptr-> data=Copy_Data;
	ptr->next=null;	
	mynode * temp =Head;
	for(;temp->next != null;temp=temp->next);
	
	temp->next=ptr;
	}
	else
	{
		AddFirst(Copy_Data);
	}
		
}
void DeleteLast(void)
{
	if( Head != null ){
		
		if(Head -> next == null){
			
		free(Head);
		Head=null;
		}
		else
		{
		
		mynode * temp1 = Head  ;
		mynode * temp2 = Head -> next;
		while(temp2->next != null)
		{
			temp1=temp1->next;
			temp2=temp2->next;
		}
		temp1->next=null;
		free(temp2);
		}
		
	}else{
		
		printf("Your List Empty \n");
		
	}
	printf("------------------------\n");
	
}
