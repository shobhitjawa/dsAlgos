#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void findper(int a[],int n)
{
	sort(a,a+n);
	cout<<"permutation are";
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	cout<<endl;
	while(next_permutation(a, a + n)!=NULL)
	{
		for(int i=0;i<n;i++)
		{
			cout<<a[i];
		}
		cout<<endl;
	}
}
int main()
{
	int arr[] = {1,2,3,4};
	int n=4;
	cout<<endl;
	findper(arr,n); 
	return 0;
}
