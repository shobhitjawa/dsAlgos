#include<stdio.h>
#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
void star(int a[],int n)
{
	int sum=0;
	sort(a,a+n);
 	for(int i=0;i<n/2;i++) 
   {
	sum=sum-(2*a[i]);
	sum=sum+(2*a[n-i-1]);   //maximize sum of consecutive diference in circular array.
   }                             //time complexity- O(nlog(n)).
   cout<<sum;
}
int main()
{
  int a[]={1,4,2,8};
  int n=4;
  star(a,n);
  return 0;	
}

