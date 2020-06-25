#include <bits/stdc++.h> 
using namespace std;   
int minOperation (int arr[], int n)  
{   
     map<int, int> hash;  
    for (int i=0; i<n; i++) 
        hash[arr[i]]++;  
    int max_count = 0; 
     map<int, int>::iterator itr; 
     
	   for (itr = hash.begin(); itr != hash.end(); ++itr) { 
               if(itr->second>max_count)
			   {
			   	max_count=itr->second;                   ///minimum opertation required to eqaulize a array.
				} 
    }   
   return n-max_count;  
}  
int main() 
{ 
    int arr[] = {1, 5, 2, 1, 3, 2, 1}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << minOperation(arr, n); 
    return 0; 
}  
