#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isOperand(char x)
{
	if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
	{
		return true;
	}
	else{
		return false;
	}
}
void getInfix(string expr)
{
	stack<string>s1;
	for(int i=0;expr[i]!='\0';i++)
	{
		if(isOperand(expr[i]))
		{
			string op=(1,expr[i]);
			s1.push(op);
		}                                        //postfix to infix.cpp;
		else{
		  string op1=s1.top();
		  s1.pop();
		  string op2=s1.top();
		  s1.pop();
		   s1.push("(" + op2 + expr[i] + 
                   op1 + ")");  
		}
	}
	    cout<<s1.top()<<" ";
}
int main()
{
 string exp = "ab*c+"; 
   getInfix(exp);
    return 0; 
}	
