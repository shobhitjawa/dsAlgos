#include<stdio.h>
#include<iostream>
using namespace std;
void fibb(int n){
	int a[n];
	a[0]=0;
	a[1]=1;
	for(int i=2;i<n;i++)
	{                                      //reverse fibbonaci series --DP 
		a[i]=a[i-2]+a[i-1];
	}
	for(int i=n-1;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int n=5;
	fibb(n);
	return 0;
}
