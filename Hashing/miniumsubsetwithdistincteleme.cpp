#include <bits/stdc++.h> 
using namespace std;  
int subset(int arr[], int n) 
{     
 map<int,int> m1;
 for(int i=0;i<n;i++)
 {
   m1[arr[i]]++;
 }
 int max=0;
 map<int,int>::iterator itr;
 for(itr=m1.begin();itr!=m1.end();itr++) 
 {
 	if(max<itr->second)
 	{
 		max=itr->second;
	 }
 }
 return max; 
}  
int main() 
{ 
    int arr[] = { 5, 6, 9, 3, 4, 3, 4 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << subset(arr, n); 
    return 0; 
} 
