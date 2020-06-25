#include <stdio.h>  
#include <iostream>
#include <stdlib.h>
using namespace std;    
struct node {  
    int data;  
    struct node* next;  
    struct node* prev;  
}; 
node* insert(struct node* head,int data)
{
	struct node* r;
	r=new(struct node);
     r->prev=NULL;
     r->next=head;
     r->data=data;
     if(head!=NULL)
     { 
     head->prev=r;
     r->next=head;
     head=r;
	 }
	 else{
	 	head=r;
	 }
	 return head;
} 
void display(struct node* head)
{
	struct node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
void deleteanodeatposition(struct node** head,int n)
{ 
struct node* prev;
 	struct node* temp=*head;
  	int count=0;
  		if(n==0)
	{
			*head=temp->next;
		temp->next->prev=NULL; 
		delete(temp); 
	}
	else{                                           //delete a element in a linkde list via position.
    while(temp!=NULL&&count<n)
    {
    	count++;
    	prev=temp;                         //similarly do it for last element case.
    	temp=temp->next;
	}
	cout<<endl;  
	prev->next=temp->next;
	temp->next->prev=prev;
	delete(temp);
   }
}
int main()
{
	struct node* head=NULL;
	head=insert(head,10);
	head=insert(head,20);
	head=insert(head,30);
	head=insert(head,40);
//	display(head);
	int n=2;
	deleteanodeatposition(&head,0);
		display(head);
	return 0;
}
