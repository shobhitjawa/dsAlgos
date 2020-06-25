#include <bits/stdc++.h> 
using namespace std;  
struct Node 
{ 
  int data; 
  struct Node* next; 
};  
void push(struct Node** head_ref, int new_data) 
{  
  struct Node* new_node = 
          (struct Node*) malloc(sizeof(struct Node)); 
  new_node->data  = new_data;                                       //Count pairs from two linked lists whose sum is equal to a given valueTime Complexity: O(n1 + n2)
                                                                //Auxiliary Space: O(n1)
  new_node->next = (*head_ref);  
  (*head_ref)    = new_node; 
}   
int countPairs(struct Node* head1, struct Node* head2, 
                                              int x) 
{ 
set<int> s1;
int count=0;
     struct Node* temp=head1;
	  while(temp!=NULL)
	  {
	  	s1.insert(temp->data);
	  	temp=temp->next;
	  }
	  while(head2!=NULL)
	  {
	  	if(s1.find(x-head2->data)!=s1.end())
	  	{
	  		count++;
		  }
		  head2=head2->next;
	  }
	  return count;
}  
int main() 
{ 
    struct Node* head1 = NULL; 
    struct Node* head2 = NULL;  
    push(&head1, 7);  
    push(&head1, 5); 
    push(&head1, 3); 
    push(&head1, 1);      
    push(&head2, 2); 
    push(&head2, 3); 
    push(&head2, 5); 
    push(&head2, 8); 
    int x = 10; 
    cout << "Count = "
         << countPairs(head1, head2, x); 
    return 0; 
} 
