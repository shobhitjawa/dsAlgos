#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ceil(int arr[],int low,int high,int x)
{
	int mid;
	if(arr[low]>=x)
	return low;
	if(arr[high]<x)
	return -1;
	mid=(low+high)/2;
	if(arr[mid]==x)                         //ceiling of a ssorted array O(logn).
	return mid;
	else if(arr[mid]<x)
	{
		if(mid+1<=high&&x<=arr[mid+1])
		return mid+1;
		else
		return ceil(arr,mid+1,high,x);
	}
	else{
		if(mid-1>=low&&arr[mid-1]<x)
		return mid;
		else
		return ceil(arr,low,mid-1,x);
	}
}

int main()
{
	int arr[]={1, 2, 8, 10, 10, 12, 19};
	int n=7;
	int x=3;
	int index=ceil(arr,0,n-1,x);
	if(index==-1)
	cout<<"Ciel doesnot exist";
	else
	cout<<"ciel is "<<arr[index];
		return 0;
}
