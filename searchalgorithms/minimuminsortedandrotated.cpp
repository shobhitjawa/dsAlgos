#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findmin(int arr[],int low,int high){
	if(high<low)
	return arr[0];
	if(high==low)
	return arr[low];
	int mid=low+(high-low)/2;
	if(mid<high&&arr[mid+1]<arr[mid])        //find minimum element in sorted and rotated array. t-O(logn).best case.
	return arr[mid+1];
	 if(mid>low&&arr[mid]<arr[mid-1])
	 return arr[mid];
	 if(arr[high]>arr[mid])
	 return findmin(arr,low,mid-1);
	 return findmin(arr,mid+1,high);	 
}
int main()
{
	int arr1[]={1,6,8,9,12};
	int n=5;
	cout<<"minimum element is "<<findmin(arr1,0,n-1);
	return 0;
}
