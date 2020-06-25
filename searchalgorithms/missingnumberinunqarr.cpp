#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getmn(int a[], int n)  
{  
    int i, total=1;  
      
    for ( i = 2; i<= (n+1); i++)           //find missing number in a array.Time complexity-O(n).
    { 
        total+=i; 
        total -= a[i-2]; 
    } 
    return total;  
}  
int main()
{
	int arr[]={1,2,3,4,5,6,7,9};
	int n=8;
	int miss=getmn(arr,n);
	            cout<<miss;
	return 0;
}
