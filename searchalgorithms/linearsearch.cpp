#include<stdio.h>
#include<iostream>
using namespace std;
int search(int arr[],int n,int x)
{
	int i;
	for(int i=0;i<n;i++){
	if(a[i]==x)
	{
	return i;              //linear search
    }
       }
	return -1;
}
int main()
{
	int arr[]={1,2,3,4,5,6};
	int n=6;
	x=3;
	int result=search(arr,n,x);
	if(result ==-1)
	cout<<"element is not present at index";
	else
	cout<<"element is present at index";
	return 0;
}
