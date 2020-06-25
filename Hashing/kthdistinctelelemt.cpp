#include <bits/stdc++.h> 
using namespace std; 
int printKDistinct(int arr[],  
                   int n, int k) 
{  
   map<int,int> m1;
   int count=0;
   for(int i=0;i<n;i++){
   	m1[arr[i]]++;
   } 
   for(int i=0;i<n;i++)
   {
   	if(m1[arr[i]]==1)
   	{
   		count++;
	   }
	   if(count==k)
	   {                               //k-th distinct (or non-repeating) element in an array. time-O(n),space-O(n)
	   	return arr[i];
	   }
   }
  }  
int main () 
{ 
    int ar[] = {1, 2, 1, 3, 4, 2}; 
    int n = sizeof(ar) / sizeof(ar[0]); 
    cout << printKDistinct(ar, n, 2); 
    return 0; 
}
