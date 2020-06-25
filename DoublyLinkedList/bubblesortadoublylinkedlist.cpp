#include <bits/stdc++.h> 
using namespace std;  
struct Node 
{ 
    int data; 
    struct Node *next; 
    struct Node *prev; 
};  
void push(struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = new Node; 
    new_node->data  = new_data; 
    new_node->next = (*head_ref); 
    new_node->prev = NULL; 
    if ((*head_ref) !=  NULL) 
      (*head_ref)->prev = new_node ; 
    (*head_ref)    = new_node; 
}  
  
 struct Node* bubblesort(struct Node* head)
{
	struct Node* temp1=head;
	struct Node* temp2;
	int temp3;
	while(temp1!=NULL)
	{
		temp2=temp1;
		while(temp2!=NULL)
		{
			if(temp1->data>temp2->data)
			{
	          temp3=temp1->data;
			  temp1->data=temp2->data;
			  temp2->data=temp3;			
			}
			temp2=temp2->next;
		}
		temp1=temp1->next;
	}
	return head;
}
void display(struct Node* heada)               //bubble sort a doubly linked list.
{
	struct Node* temp11=heada;
	while(temp11!=NULL)
	{
		cout<<temp11->data<<" ";
		temp11=temp11->next;
	}
}
int main() 
{ 
    struct Node* head = NULL; 
    push(&head, 5); 
    push(&head, 14); 
    push(&head, 22); 
    push(&head, 10); 
  //  cout << findSize(head); 
    struct Node* head1=bubblesort(head);
     display(head1);
    return 0; 
} 
