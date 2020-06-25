#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isoperator(char x)
{
     if(x=='+'||x=='-'||x=='/'||x=='*')
     {
     	return true;
	 }
	 else{
	 	return false;
	 }
}
string preToInfix(string pre) { 
stack<string> s1;
   string temp;
  int length=pre.length();
  for(int i=length-1;i>=0;i--)
  {                                     //prefix to infix notation.     //can also be done via prefix to postfix anf postfix to infix.
  	if(isoperator(pre[i]))
  	{
  	  string t1; 
  	   t1=s1.top();
  	   s1.pop();
  	   string t2=s1.top();
  	   s1.pop();
  	  temp = "(" + t1 + pre[i] + t2 + ")";
		  s1.push(temp); 
	  }
	  else{
	  	string v(1,pre[i]);
	  	s1.push(v);
	  }
	  
  }
  return temp;
}
int main() { 
  string pre_exp = "*-A/BC-/AKL"; 
  cout << "Infix : " << preToInfix(pre_exp); 
  return 0; 
} 

