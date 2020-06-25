#include <bits/stdc++.h> 
#include<stdio.h>
using namespace std;  
void printMissing(int arr[], int n, int low, 
                  int high) 
{ 
   
}  
int binarysearch(int arr[],int l,int r,int low)
{
	int x=r+1;
	sort(arr,arr+x);                                 //Find missing elements of a range using sorting techique.
    int ans = -1; 
    while (l<= r) 
    {  
        int mid = (l + r) / 2;  
        if (arr[mid] <= low) 
            l = mid + 1;  
        else
        { 
            ans = mid; 
            r = mid - 1; 
        } 
    }  
    return ans; 
} 
void printMissing(int arr[],int n,int c,int low,int high)
{
	for(int i=low;i<high;i++)
	{
		if(arr[c]!=i)
		{
			cout<<i<<" ";
		}
		else{
			c++;
		}
	}
}
int main() 
{ 
    int arr[] = {1, 14, 11, 51, 15}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int low = 50, high = 55; 
   int c= binarysearch(arr,0,n-1,low);
 //  cout<<c;
    printMissing(arr, n,c,low,high); 
    return 0; 
} 
