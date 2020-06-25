#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={1, 8, 30, 40, 100};
	int n=5;
	int x=60;
	int max=arr[0];
	int i=0;          //pair with a difference
	int j=1;
    while(i<n&&j<n)
    {
    	if(i!=j&&arr[j]-arr[i]==x)
    	{
    		cout<<"pair found:"<<arr[i]<<"and"<<arr[j];
    		break;
		}
		else if(arr[j]-arr[i]<x)
		j++;
		else 
		i++;
	}
	return 0;
}
