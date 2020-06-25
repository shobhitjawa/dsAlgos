#include<bits/stdc++.h> 
using namespace std;  
struct Node 
{ 
    int data; 
    struct Node *next, *prev; 
};   
void pairSum(struct Node *head, int x) 
{
  struct Node* a=head;
  struct Node* b=head; 
  while(b->next!=NULL)
  {
  	b=b->next;
  } 
  while(a!=NULL&&a->next!=NULL&&b->next!=a&&b!=NULL)
  {
  	if(a->data+b->data==x)
  	{
  		cout<<a->data<<" and "<<b->data;
  		a=a->next;
  		b=b->prev;                                     //find pair of sum in a doubly linked list sorted.best cae time complexity--O(N) SPACE-O (1);
	  }
	  else{
	  	if(a->data+b->data<x)
	  	{
	  		a=a->next;
		  }
		  else
		  b=b->prev;
	  }
  }
}
void insert(struct Node **head, int data) 
{ 
    struct Node *temp = new Node; 
    temp->data = data; 
    temp->next = temp->prev = NULL; 
    if (!(*head)) 
        (*head) = temp; 
    else
    { 
        temp->next = *head; 
        (*head)->prev = temp; 
        (*head) = temp; 
    } 
}   
int main() 
{ 
    struct Node *head = NULL; 
    insert(&head, 9); 
    insert(&head, 8); 
    insert(&head, 6); 
    insert(&head, 5); 
    insert(&head, 4); 
    insert(&head, 2); 
    insert(&head, 1); 
    int x = 7; 
  
    pairSum(head, x); 
  
    return 0; 
} 
