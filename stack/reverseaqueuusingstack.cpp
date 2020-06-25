#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(queue<int> &q1);
void reverse(queue<int> &q1)
{
	stack<int> s1;
	while(q1.empty()==false)
	{
		s1.push(q1.front());
		q1.pop();                         //reverse a queue using stack
	}
	while(s1.empty()==false)
	{
		cout<<s1.top()<<" ";
		s1.pop();
	}
}
int main()
{
	queue<int> q1;
	q1.push(1);
		q1.push(2);
		q1.push(3);
		q1.push(4);
		q1.push(5);
		q1.push(6);
		q1.push(7);
		q1.push(8);
		q1.push(9);
		q1.push(10);
		q1.push(11);
	reverse(q1);
}
