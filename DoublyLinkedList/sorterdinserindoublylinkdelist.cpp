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
void sortedinsert(struct node** head,int n)
{
	struct node* p;
	p=new (struct node);
	p->data=n;
	struct node* u=*head;
	struct node* v=*head;  
	if(n<u->data)
	{
	 p->next=u;
	 u->prev=p;
	 p->prev=NULL;
	 *head=p;	                            //sorted insert in doubly linked list.
	}
	else{
	struct node* pre;
	struct node* temp=*head;
    while(temp!=NULL&&n>temp->data)
    {
    	pre=temp;
    	temp=temp->next;
	} 
     	p->next=pre->next;
	pre->next=p;
	p->prev=pre;	
  }
}
int main()
{
	struct node* head=NULL;
	head=insert(head,40);
	head=insert(head,30);
	head=insert(head,20);
	head=insert(head,10);
	display(head);
	sortedinsert(&head,3);
	cout<<endl;
		display(head);
	return 0;
}
