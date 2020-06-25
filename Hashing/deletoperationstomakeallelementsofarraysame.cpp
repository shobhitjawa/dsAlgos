#include<bits/stdc++.h> 
using namespace std;  
int minDelete(int arr[],int n) 
{  
 map<int,int> m1;
  for(int i=0;i<n;i++)
  {
    m1[arr[i]]++; 	                         //delete operations to make all elements of array same time complexity -O(n).
  }
  int max=0;
  map<int,int>:: iterator itr;
  for(itr=m1.begin();itr!=m1.end();itr++)
  {
  	if(max<itr->second)
    {
    	max=itr->second;
	}
  }
  return n-max;
}  
int main() 
{ 
    int arr[] = {1, 2, 3, 4, 5}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << minDelete(arr, n); 
    return 0; 
} 
