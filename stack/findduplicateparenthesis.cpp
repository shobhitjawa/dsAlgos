#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int finddduplicateparen(string str)
{ 
	stack<char>s1;
	int len=str.length(); 
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==')')
		{
			char top=s1.top();
			s1.pop();                //find duplicate parenthesis in a string.
			int count=0;
			while(top!='(')
			{
				count=count+1;
				top=s1.top();
				s1.pop();
			}
			if(count<1)
			{
				return 0;
			}
		}
		else{
			s1.push(str[i]);
		}
	}
	return 1;
}
int main()
{
	string str="((a))";
	if(finddduplicateparen(str)==0)
	{
		cout<<"Duplicate found";
	}
	else{
		cout<<"Duplicate not found";
	}
	return 0;
}
