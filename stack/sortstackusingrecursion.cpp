#include<stdio.h>	
#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
void sortstack(stack<int> &s1);
void sortedinsert(stack<int> &s1,int x); 
void sortstack(stack<int> &s1)
{  
	if(s1.empty()==false)
	{ 
		int x=s1.top();
		s1.pop();
		sortstack(s1);
		sortedinsert(s1,x);
	} 
	return;
}
void sortedinsert(stack<int> &s1,int x)
{  
	if(s1.empty()==true||x<s1.top())
	{
		s1.push(x);
		return;
	}
	int temp=s1.top();
	s1.pop();
	sortedinsert(s1,x);
	 s1.push(temp); 
}
int main()
{
	stack<int>s1;
	s1.push(31);
	s1.push(22);
	s1.push(3);
	s1.push(4);
	s1.push(14);   
    sortstack(s1);
    cout<<endl;
    cout<<"stack after sorting: ";
    while(s1.empty()==false)
    {
    	cout<<s1.top()<<" "; 
    	s1.pop();
	}
    return 0;
}
