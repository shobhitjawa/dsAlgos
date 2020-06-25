#include<bits/stdc++.h> 
using namespace std;  
void printFirstRepeating(int arr[], int n) 
{   
 set<int> s1;
 int x;
 for(int i=n-1;i>=0;i--)
 {
 	if(s1.find(arr[i])!=s1.end())
 	{
 	x=i;
	 }
	 else{
	 	s1.insert(arr[i]);
	 }
 }
 cout<<arr[x];                                        //print first repeating element in  a array.
 
}  
int main() 
{ 
    int arr[] = {10, 5, 3, 4, 3, 5, 6}; 
  
    int n = sizeof(arr) / sizeof(arr[0]); 
    printFirstRepeating(arr, n); 
}  

