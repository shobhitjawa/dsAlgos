#include <bits/stdc++.h> 
using namespace std;  
int countPairs(int arr1[], int arr2[],  
               int m, int n, int x) 
{ 
    int count = 0; 
      
     set<int> us;   
    for (int i = 0; i < m; i++) 
        us.insert(arr1[i]);                                                 //Count pairs from two sorted arrays whose sum is equal to a given value x
    for (int j = 0; j < n; j++)                                           //time complexity O(m+n),space -O(m).
        if (us.find(x - arr2[j]) != us.end()) 
            count++;        
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
