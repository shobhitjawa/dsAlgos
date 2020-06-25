#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(stack<int> &s1)
{
	stack<int>s2;
	while(s1.empty()==false)
	{
		int a=s1.top();
			s1.pop();
		while(s2.empty()==false&&s2.top()>a)
		{  
	     s1.push(s2.top());
	     s2.pop();
		}
		s2.push(a); 
	}
	while(s2.empty()==false)
	{
		cout<<s2.top()<<" ";
		s2.pop();
	}
}
int main()
{
	stack<int>s1;
	s1.push(11);
	s1.push(3);
	s1.push(9);
	s1.push(2);
	s1.push(19);
	reverse(s1);
	return 0;
}

