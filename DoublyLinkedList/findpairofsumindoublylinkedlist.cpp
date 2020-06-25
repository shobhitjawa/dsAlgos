#include<bits/stdc++.h> 
using namespace std;  
struct Node 
{ 
    int data; 
    struct Node *next, *prev; 
};   
void pairSum(struct Node *head, int x) 
{
	struct Node* temp=head;
	while(temp!=NULL)
	{
		struct Node* temp1=temp->next;
		while(temp1!=NULL)
		{
			if(temp->data+temp1->data==x)
			{
				cout<<temp->data<<" and "<<temp1->data;                    //find pair sum in doubly linked list time complexity-O(n).
				cout<<endl;
				temp1=temp1->next;
			}
			else
			temp1=temp1->next;
		}
		temp=temp->next;
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
