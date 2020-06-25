#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1, 2, 8, 10, 10, 12, 19};
	int n=6;
	int count=0;
	sort(arr,arr+n);
	int c=3;
	for(int i=0;i<n;i++)
	{
	  if(arr[i]<c&&arr[i+1]>c)
	  {
	  cout<<"ciel of c is "<<arr[i+1];
	  break;
	  }  
	  else{
	  	count++;
	  }	
   }
   if(count==n)
   cout<<"ciel is not present";
	
    return 0;
}
