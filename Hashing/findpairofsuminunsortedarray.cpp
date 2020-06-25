#include <bits/stdc++.h> 
using namespace std;  
void findPairs(int arr1[], int arr2[], int n, 
               int m, int x) 
{
	set<int> s1;
	for(int i=0;i<n;i++)
	{
	 s1.insert(arr1[i]);	
    }		
    for(int i=0;i<m;i++){
    	if(s1.find(x-arr2[i])!=s1.end())
    	{
    		cout<<x-arr2[i]<<","<<arr2[i]<<endl;         //Given two unsorted arrays, find all pairs whose sum is x
		}  
	}
}  
int main() 
{ 
    int arr1[] = { 1, 0, -4, 7, 6, 4 }; 
    int arr2[] = { 0, 2, 4, -3, 2, 1 }; 
    int x = 8; 
    int n = sizeof(arr1) / sizeof(int); 
    int m = sizeof(arr2) / sizeof(int); 
    findPairs(arr1, arr2, n, m, x); 
    return 0; 
} 
