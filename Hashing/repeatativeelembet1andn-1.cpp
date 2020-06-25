#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findRepeating(int arr[], int n) 
{ 
  set<int> s1;
   for(int i=0;i<n;i++)
   {
   	if(s1.find(arr[i])!=s1.end())
   	{
   		return arr[i];
		   	   }
	   else{
	   	s1.insert(arr[i]);
		   	   }
	} 
} 

int main()
{
	int arr[] = { 9, 8, 2, 6, 1, 8, 5, 3, 4, 7 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << findRepeating(arr, n); 
    return 0;
}
