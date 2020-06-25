#include<stdio.h>
#include<iostream>
using namespace std;
int countPaths(int n,int m)
{
	if(m==0||n==0)
	{
		return 1;
	}
	return (countPaths(n-1,m)+countPaths(n,m-1));                    // Counts paths from a point to reach Origin
}
int main()
{
	int n=3;
	int m=2;
	 cout << " Number of Paths " << countPaths(n, m); 
    return 0; 
}
