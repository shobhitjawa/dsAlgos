#include <iostream> 
#include <vector> 
#include <map> 
using namespace std;  
struct Node 
{ 
    int key; 
    Node *left, *right; 
};  
struct Node* newNode(int key) 
{ 
    struct Node* node = new Node; 
    node->key = key; 
    node->left = node->right = NULL; 
    return node; 
} 
   
void getVerticalOrder(Node* root, int hd, map<int, vector<int> > &m) 
{   
if(root==NULL)
return;
if(root!=NULL)
{
  m[hd].push_back(root->key);
  getVerticalOrder(root->left,hd-1,m);
  getVerticalOrder(root->right,hd+1,m);
}
}                                                 //vertical order traversal of a binary tree.Time Complexity of hashing based solution can be considered as O(n) 
void printVerticalOrder(Node* root) 
{  
    map < int,vector<int> > m; 
    int hd = 0; 
    getVerticalOrder(root, hd,m);  
    map<int,vector<int> >::iterator iter;
    cout<<endl;
    for(iter=m.begin();iter!=m.end();iter++)
    {
    	
      for (int i=0; i<iter->second.size(); ++i) 
            cout << iter->second[i] << " "; 
        cout << endl;
	}
}   
int main() 
{ 
    Node *root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    root->right->left = newNode(6); 
    root->right->right = newNode(7); 
    root->right->left->right = newNode(8); 
    root->right->right->right = newNode(9); 
    cout << "Vertical order traversal is n"; 
    printVerticalOrder(root); 
    return 0; 
} 
