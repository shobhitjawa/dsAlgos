#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1, 30, 40, 50, 60, 70, 23, 20};
	int n=8;
	int max=arr[0];
	for(int i=0;i<n;i++)                                   //max element
	{
		if(arr[i]>max)
		max=arr[i];
	}
	cout<<max;
	return 0;
}
