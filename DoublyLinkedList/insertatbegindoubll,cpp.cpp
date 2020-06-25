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
int main()
{
	struct node* head=NULL;
	head=insert(head,10);
	head=insert(head,20);
	head=insert(head,30);
	head=insert(head,40);
	display(head);
	return 0;
}
