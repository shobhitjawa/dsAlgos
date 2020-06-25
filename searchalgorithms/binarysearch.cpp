#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binarys(int arr[],int l,int r,int x)
{
	int mid=l+(r-l)/2;
	if(arr[mid]==x)
	return mid;
	
	if(arr[mid]>x)
	return binarys(arr,l,mid-1,x);
	
	return binarys(arr,mid+1,r,x);
}
int main()
{
	int arr[]={1, 2, 8, 10, 12, 19};
   int n=6;
    int x=2;
   int y=binarys(arr,0,n-1,x);
   cout<<"element present at index  "<<y;
    return 0;
}
