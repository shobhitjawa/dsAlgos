#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={-10, -1, 0, 3, 10, 11, 30, 50, 100};
	int n=9;
	int c=0;
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==i)
		{
		cout<<i;
		break;
	}
	else{
		c++;
	}
    }
    if(c==n)
    {
    	cout<<"not found";
	}
	return 0;
}

