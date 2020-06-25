#include<stdio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std; 
void deletemid(stack<int> &a1,int n,int x)
{ 
	if(a1.empty()==true||x==n)
	{
		return;
	}
	else
	{
		int y=a1.top();                        //delete middle element of stack.cpp
		a1.pop();
		
		deletemid(a1,n,x+1);
		if(x!=n/2)
		{ 
			a1.push(y);
			//cout<<a1.top()<<" "; 
		}
		
}
	return;
}
 
int main()
{
	stack<int>a1;
	a1.push(1);
	a1.push(2);
		a1.push(3);
	a1.push(4);
		a1.push(5);
		 int size=a1.size();
		 int x=0;
		deletemid(a1,size,x);
	    while (a1.empty()==false) 
    { 
        cout<<a1.top()<<" "; 
    a1.pop();  
    }
		return 0;
}
