#include<stdio.h>
#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
void star(int arr[],int n,int m)
{
  sort(arr,arr+n,greater<int>());
  for(int i=0;i<m;i++)
  cout<<arr[i]<<" ";
}
int main()                          //k largest elements in array time complexity-O(nlogn).
{
  int a[]={2,4,1,7,9};
  int n=5;
  int m=3;
  star(a,n,m);
  return 0;	
}

