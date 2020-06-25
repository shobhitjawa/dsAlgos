#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int indexofclosing(string s,int index)
{
		int val;
	int j=0;
	int a[100];
	int len=s.length();
	stack<char> s1;
	if(s[index]!='[')
	{
		return -1;
	}
     char st=s[index];
     for(int i=0;i<len;i++)
     {                                        //find index of closing bracket using stack.
     	a[i]=j;
     	j++;
	 }  
     for(int i=0;i<len;i++)
     {
      if(s[i]=='[')
      {
      	s1.push(a[i]);
	  }
	  else if(s[i]==']')
	  {
	  	int x=a[i];
	  	int g=s1.top(); 
	  if(g==index)
	  {
	   val=x;
	  }
	    s1.pop();	 
	  }
	 }
	  
return val;
}
int main()
{
	string s="[ABC[23]][89][]";
	int index=13;
	int b=indexofclosing(s,index);
       if(b!=-1)
       {
       	cout<<"value of closing bracket is: "<<b;
	   }
	   else{
	   	cout<<"not valid";
	   }
	return 0;
}
