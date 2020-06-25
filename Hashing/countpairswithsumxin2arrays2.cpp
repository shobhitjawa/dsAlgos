#include <bits/stdc++.h> 
using namespace std; 
int countPairs(int arr1[], int arr2[],  
               int m, int n, int x) 
{ 
    int count = 0;  
    int l = 0, r = n - 1;  
    while (l < m && r >= 0) 
    {   
        if ((arr1[l] + arr2[r]) == x) 
        {                                          //Count pairs from two sorted arrays whose sum is equal to a given value x
        l++; r--;                                 //time complexity- O(mn), space complexity- O(1).
		count++;          
        }   
        else if ((arr1[l] + arr2[r]) < x) 
            l++;    
        else
            r--;  
    }        
    return count; 
}   
int main() 
{ 
    int arr1[] = {1, 3, 5, 7}; 
    int arr2[] = {2, 3, 5, 8}; 
    int m = sizeof(arr1) / sizeof(arr1[0]); 
    int n = sizeof(arr2) / sizeof(arr2[0]); 
    int x = 10; 
    cout << "Count = "
          << countPairs(arr1, arr2, m, n, x); 
    return 0;      
} 
