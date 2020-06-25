#include<Stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countfr(int n)
{
	int dp[n+1];
	for(int i=0;i<=n;i++)
	{
		if(i<=2)
		{
			dp[i]=i;
		}
		else
		{                             //friends pairing problem time complexity-O(n), space Complexity-O(n). 
			dp[i]=dp[i-1]+(i-1)*dp[i-2];
		}
	}
	return dp[n];
}
int main()
{
	int n=4;
	cout<<countfr(n)<<endl;
	return 0;
}
