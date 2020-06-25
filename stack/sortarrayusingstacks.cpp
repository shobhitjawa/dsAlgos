#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void sortarray(stack<int> &s1,int n)
{
stack<int> s2;	
 while (s1.empty()==false) 
    {  
        int tmp = s1.top(); 
        s1.pop();  
        while (s2.empty()==false && s2.top()>tmp) 
        {  
            s1.push(s2.top());            //sort array using stacks time complexity-O(n).
            s2.pop(); 
        }  
        s2.push(tmp); 
    } 
  while(s2.empty()==false)
  {
  	cout<<s2.top()<<" ";
  	s2.pop();
  }
}
int main()
{
	int arr[]={5,36,4,9,12,24};
	int size=6;
	stack<int> s1;
	for(int i=0;i<size;i++)
	{
		s1.push(arr[i]);
	}
	sortarray(s1,size);
	return 0;
}
