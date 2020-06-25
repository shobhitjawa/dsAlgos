#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int star(int[] v,int a,int n)
{
	int solution[n+1][a+1];
	for(int i=0;i<n;i++)
	{
		solution[i][0]=1;
	}
	for(int i=1;i<a;i++)
	{
		solution[0][i]=0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=a;j++)
		{
			if(v[i-1]<=j)
			solution[i][j]=solution[i-1][j]+solution[i][j-v[i-1]];
			else
			{
				solution[i][j]=solution[i-1][j];
							}
		}
	}
	return solution[n][amount];
}
int main()
{
	int amount =5;
	int v[] ={0,1,2};
	n=3;
	cout<<star(v,amount,n);
	return 0;
}
