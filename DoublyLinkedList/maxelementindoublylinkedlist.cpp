#include <iostream> 
using namespace std;    
struct Node 
{  
    int data;  
    struct Node* next;  
    struct Node* prev;  
};   
void push(struct Node** head_ref, int new_data)  
{   
    struct Node* new_node = new (struct Node);
    new_node->data = new_data;   
    new_node->prev = NULL;   
    new_node->next = (*head_ref);   
    if ((*head_ref) != NULL)  
        (*head_ref)->prev = new_node;             //max element in a doubly linked list.
    (*head_ref) = new_node;  
}   
int LargestInDLL(struct Node** head_ref)  
{  
    struct Node* temp=*head_ref;
    struct Node* max=*head_ref;
    while(temp->next!=NULL)
	{
		if(temp->data>max->data)
		{
			max=temp;
		}
			temp=temp->next;
	 } 
	 return max->data;
}    
int main()  
{     
    struct Node* head = NULL;   
    push(&head, 20);  
    push(&head, 14);  
    push(&head, 181);  
    push(&head, 100);  
  
    cout << LargestInDLL(&head);  
    return 0;  
}  
