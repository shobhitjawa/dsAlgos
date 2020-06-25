#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool subset(int arr[],int n,int sum)
{
	bool T[n+1][sum+1];
	for(int i=0;i<=n;i++)
	{
		T[i][0]=true;
	}
	for(int j=1;j<=sum;j++)
	{
		T[0][j]=false;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=sum;j++){                         //subset sum is present or not -DP(**)-Time complexity-O(mn).
			if(j<arr[i-1])
			T[i][j]=T[i-1][j];
			else{
				T[i][j]=T[i-1][j]||T[i-1][j-arr[i-1]];
			}
		}
	}
	return T[n][sum];
}
int main()
{
	int arr[]={7,3,2,5,8};
	int sum=18;
	int n=5;
   bool c=subset(arr,n,sum);
    if(c==1)
    cout<<"yes";
    else
    cout<<"no";
return 0;
	
}
