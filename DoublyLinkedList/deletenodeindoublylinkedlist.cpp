#include<stdio.h>
#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
	struct node* prev;
};
node* insert(struct node* head,int data)
{
	struct node* p;
	p=new(struct node);
	p->data=data;
	p->next=NULL; 
	struct node* temp=head;
	if(head!=NULL)
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		} 
		temp->next=p;
		p->prev=temp;
		p->next=NULL;
	}
	else{
		p->prev=NULL;
		head=p;
	}
	return head;
}
void display(struct node* head)     //insert a node at the end of DLL. 
{
	struct node* temp=head;
	while(temp!=NULL) 
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
void deleteNode(struct node** head,struct node* del_node)
{
	if(*head==del_node)                                       //delete a node in linked doubly list 
	{
		*head=del_node->next;
	}
   if (del_node->next != NULL)  
        del_node->next->prev = del_node->prev;  
        
    if (del_node->prev != NULL)  
        del_node->prev->next = del_node->next;
  
        delete(del_node);
        return;
}
int main()
{
	struct node* head=NULL;
	head=insert(head,10);
	head=insert(head,20);
	head=insert(head,30);
	head=insert(head,40);
	display(head);
	deleteNode(&head,head->next);
	cout<<endl;
	display(head);
	return 0;
}
