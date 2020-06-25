#include <bits/stdc++.h> 
using namespace std;  
int printKDistinct(int arr[], int n,  
                              int k) 
{ 
int count=0;
for(int i=0;i<n;i++)
{
	int j;
	for(j=0;j<n;j++)
	{
		if(arr[i]==arr[j]&&i!=j)
		{
			break;
		}
	                                               //print kth distinct.
	}
		if(j==n)
		{
			count++;
		}
	if(count==k)
	{
		return arr[i];
	}
 }
 return -1; 
}  
int main () 
{ 
    int ar[] = {1, 2, 1, 3, 4, 2}; 
    int n = sizeof(ar) / sizeof(ar[0]); 
    int k = 2; 
    cout << printKDistinct(ar, n, k); 
    return 0; 
} 
