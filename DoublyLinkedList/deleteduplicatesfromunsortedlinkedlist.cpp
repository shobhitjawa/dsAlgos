#include <bits/stdc++.h>  
using namespace std;  
struct Node { 
    int data; 
    struct Node* next; 
    struct Node* prev; 
};  
void deleteNode(struct Node** head_ref, struct Node* del) 
{  
    if (*head_ref == NULL || del == NULL) 
        return;  
    if (*head_ref == del) 
        *head_ref = del->next;  
    if (del->next != NULL) 
        del->next->prev = del->prev;  
    if (del->prev != NULL) 
        del->prev->next = del->next;   
    delete(del); 
}  
void removeDuplicates(struct Node** head_ref) 
{  
     if((*head_ref)==NULL||(*head_ref)->next==NULL)
     return;
         set<int> us;                                     //remove duplicates from unsorted linked list.//time comple-O(n),space-O(n). best approach.
		 struct  Node* current=*head_ref;
		  struct  Node* temp1;
		 while(current!=NULL)
		 {
		 	if(us.find(current->data)!=us.end())
		 	{
		 		temp1=current->next;
		 		deleteNode(head_ref,current);
		 		current=temp1;
			 }
			 else{
			 	us.insert(current->data);
			 	current=current->next;
			 }
		 }
		 
}
void push(struct Node** head_ref, int new_data) 
{  
    struct Node* new_node =  
         (struct Node*)malloc(sizeof(struct Node));  
    new_node->data = new_data;  
    new_node->prev = NULL;  
    new_node->next = (*head_ref);  
    if ((*head_ref) != NULL) 
        (*head_ref)->prev = new_node;  
    (*head_ref) = new_node; 
}  
void printList(struct Node* head) 
{  
    if (head == NULL) 
        cout << "Doubly Linked list empty"; 
  
    while (head != NULL) { 
        cout << head->data << " "; 
        head = head->next; 
    } 
}  
int main() 
{ 
    struct Node* head = NULL;  
    push(&head, 12); 
    push(&head, 12); 
    push(&head, 10); 
    push(&head, 4); 
    push(&head, 8); 
    push(&head, 4); 
    push(&head, 6); 
    push(&head, 4); 
    push(&head, 4); 
    push(&head, 8); 
  
    cout << "Original Doubly linked list: "; 
    printList(head);  
    removeDuplicates(&head); 
  
    cout << "\nDoubly linked list after "
             "removing duplicates: "; 
    printList(head); 
  
    return 0; 
} 
