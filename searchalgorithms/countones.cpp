#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countone(int arr[],int low,int high)
{
	int mid;
	if(high>low)
	{
	mid=low+(high-low)/2;
	  if((mid==high||arr[mid+1]==0)&&(arr[mid]==1))
	  return mid+1;
	  if(arr[mid]==0)
	  return countone(arr,(low),(mid-1));
	  return countone(arr,(mid+1),high);
    }                                     //count 1 in sorted array time omplexity-O(logn)
}
int main()
{
	int arr[]={1,1,1,1,0,0,0};
	int n=7;
	cout<<"count of 1 in array is ";
	int c=countone(arr,0,n-1);
	cout<<c;
	return 0;
}
