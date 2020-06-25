 #include<stdio.h>
 #include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct node{
	struct node*  left=NULL;
	struct node* right=NULL;
    int data;
};
node* createnode(int data)
{
	struct node* p;
	p=new (struct node);
	p->data=data;
	p->left=NULL;
	p->right=NULL;
	return p;                                           
 } 
 void inorder(struct node* root)
 {
 	if(root!=NULL)
 	{
 	  inorder(root->left);
	   cout<<root->data<<" ";
	   inorder(root->right);	
	}
 }
 int* levelorder(struct node* root)
 { 
	queue<node*> q;
	q.push(root);
	int arr[100];
	int k=0;
	while(q.empty()==false)
	{
		struct node* f=q.front();
		cout<<f->data<<" ";
		 arr[k++]=f->data;
		q.pop();                                                    
		if(f->left!=NULL)
		{
		q.push(f->left);
		}
		if(f->right!=NULL)
		{
			q.push(f->right);
		}
	}
	return arr;
 }
 node* insert(struct node* head,int data)
{
	struct node* r;
	r=new(struct node);
     r->left=NULL;
     r->right=head;
     r->data=data;
     if(head!=NULL)
     { 
     head->left=r;
     r->right=head;
     head=r;
	 }
	 else{
	 	head=r;
	 }
	 return head;
} 
void print(struct node* head)
{
	struct node* temp=head;
	while(temp!=NULL)
  { 
  cout<<temp->data<<" ";
  temp=temp->right;	 
  }
}
 int main()
 {
 	struct node * root=createnode(1);
 	root->left=createnode(2);
 	root->right=createnode(3);
 	root->right->left=createnode(4);
      int* g=levelorder(root); 
 	cout<<endl;
 	struct node* head=NULL;
 	for(int i=0;i<4;i++)
 	{
 		head=insert(head,g[i]);
	 }
	  print(head);
 	return 0;
 }
