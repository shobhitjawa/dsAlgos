#include<stdio.h>
#include<iostream>
using namespace std;
int fib(int n)
{
	int f[n+1];
	int i=0;
	f[0]=0;
	f[1]=1;
	for(i=2;i<=n;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}                                    //fiboonaci series using tabulization Dynamic progrmming.
	return f[n];
}
int main()
{
	int n=9;
	cout<<"fibbonci number is "<<fib(n);
	return 0;
}
