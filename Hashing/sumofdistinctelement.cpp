#include<bits/stdc++.h> 
using namespace std;
int findSum(int arr[],int n) 
{  
int sum=0;
set<int> s1;
for(int i=0;i<n;i++)
{
    s1.insert(arr[i]);
	 }
	 set<int>:: iterator itr;
	 for(itr=s1.begin();itr!=s1.end();itr++)    //Find sum of non-repeating (distinct) elements in an array
	 {
	 	sum=sum+*itr;
	  } 
	  return sum;
}  
int main() 
{ 
    int arr[] = {1, 2, 3, 1, 1, 4, 5, 6}; 
    int n = sizeof(arr)/sizeof(int); 
    cout << findSum(arr, n); 
    return 0; 
} 
