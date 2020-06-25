#include <bits/stdc++.h> 
using namespace std; 
struct Node { 
    char data; 
    struct Node* prev; 
    struct Node* next; 
};  
void rotate(struct Node** head_ref, int N) 
{  
if(N==0)
	return;
int count=0;
struct Node* curr=*head_ref;
struct Node* curr1=*head_ref;
struct Node* curr2=*head_ref;                 //rotate a doubly linked list.
while(curr!=NULL&&count<N-1)
{
	count++;
	curr=curr->next;
}
while(curr1->next!=NULL)
{
	curr1=curr1->next;
} 

curr1->next=*head_ref;
*head_ref=curr->next;
curr->next->prev=NULL;
curr->next=NULL;    
cout<<curr->data;
cout<<curr1->data;
}   
 void push(struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node =  new Node; 
    new_node->data = new_data; 
    new_node->prev = NULL; 
    new_node->next = (*head_ref); 
    if ((*head_ref) != NULL) 
        (*head_ref)->prev = new_node; 
   *head_ref = new_node; 
}  
void printList(struct Node* node) 
{ 
    while (node->next != NULL) { 
        cout << node->data << " "
             << "<=>"
             << " "; 
        node  = node->next; 
    } 
    cout << node->data; 
}   
int main(void) 
{  
    struct Node* head = NULL;  
    push(&head, 'e'); 
    push(&head, 'd'); 
    push(&head, 'c'); 
    push(&head, 'b'); 
    push(&head, 'a'); 
  
    int N = 2; 
  
    cout << "Given linked list \n"; 
    printList(head); 
    rotate(&head, N); 
  
    cout << "\nRotated Linked list \n"; 
    printList(head); 
  
    return 0; 
} 
