#include <bits/stdc++.h> 
using namespace std; 
  
int firstNonRepeating(int arr[], int n) 
{ 
int x;
   map<int,int> m1;
   for(int i=0;i<n;i++)
   {
   	m1[arr[i]]++;
   }
   for(int i=0;i<n;i++)                      //first non repeating element in an array.Time Complexity: O(n)
                                                 //Auxiliary Space: O(n)
   {
   	if(m1[arr[i]]==1)
   	{
    x=arr[i];//		cout<<arr[i]<<" ";
   		break;
	   }
   }
   return x;
}  
int main() 
{ 
    int arr[] = { 9, 4, 9, 6, 7}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << firstNonRepeating(arr, n); 
    return 0; 
} 
