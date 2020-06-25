#include <bits/stdc++.h> 
using namespace std;   
int find_maximum(int a[], int n, int k) 
{     
    map<int, int> b; 
      
    for (int i = 0; i < n; i++) { 
        int x = a[i];   
        int d = min(1 + i, n - i);  
        if (b.find(x) == b.end())               //Pair with given sum and maximum shortest distance from endss
            b[x] = d;   
  
        else 
            b[x] = min(d, b[x]);  
    } 
      
    int ans =999999; 
    for (int i = 0; i < n; i++) { 
        int x = a[i];       
        if (x != k - x && b.find(k - x) != b.end())          
            ans = min(max(b[x], b[k - x]), ans);         
    } 
    return ans; 
}  
int main() 
{ 
    int a[] = { 3, 5, 8, 6, 7 }; 
    int K = 11; 
    int n = sizeof(a) / sizeof(a[0]); 
    cout << find_maximum(a, n, K) << endl; 
    return 0; 
} 

