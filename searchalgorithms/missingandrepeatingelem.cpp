#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={ 7, 3, 4, 5, 5, 6, 2};
	int b[7];
	int f[7];
	int l=0;
	int c[7];
    int n=7;
    int j=0;
    int k=0;
   sort(arr,arr+n);                             //find missing and repeatiing element.TC-O(n).
   for(int i=0;i<n;i++)
   {
   	f[i]=0;
   }
   for(int i=0;i<n-1;i++)
   {
   	if(arr[i+1]-arr[i]==0)
   	{
   		f[i+1]=-1;
	   }
   }
   for(int i=0;i<n;i++)
   {
   	if(f[i]==-1)
   	{
   	cout<<"repeating element is"<<arr[i];
   	break;
     }
   }
  cout<<endl;
  for(int i=0;i<n;i++)
  {
  	if(f[i]==0)
  	{
  		c[l++]=arr[i];
	  }
  }
  for(int i=0;i<l;i++)
  {
  	cout<<c[i];
  }
  int total=1;  
      
    for ( int i = 2; i<= (l+1); i++) 
    { 
        total+=i; 
        total -= c[i-2]; 
    } 
    cout<<total; 
  cout<<"missing element is"<<total;
   return 0;
}
