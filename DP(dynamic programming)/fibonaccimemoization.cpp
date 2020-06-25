#include<stdio.h>
#include<iostream>
using namespace std;
#define NIL -1
#define MAX 100
int lookup[MAX];
 void initl()
{
	for(int i=0;i<MAX;i++)
	{           
		lookup[i]=NIL;
	}
}
int fib(int n)               //find fibbonaci number Dynamic programming using memoization. 
{
	if(lookup[n]=NIL){
		if(n<=1)
		lookup[n]=n;
		else
		lookup[n]=fib(n-1)+fib(n-2);
	}
	return lookup[n];
}
int main()
{
	int n=9;
	initl();
	cout<<"fibbonaci number "<<fib(n);
return 0;
}
