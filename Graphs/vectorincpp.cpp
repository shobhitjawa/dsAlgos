#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector <int> s1;
   for(int i=0;i<5;i++)
   {
   	s1.push_back(i);
   }
   cout<<s1[1];
   cout<<endl; 
    vector <int>::iterator itr;
for(itr=s1.begin();itr!=s1.end();itr++)
{
	cout<<*itr;
}
   return 0;
}
