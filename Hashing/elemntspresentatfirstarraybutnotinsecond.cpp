 #include<bits/stdc++.h> 
using namespace std;   
void findMissing(int a[], int b[],  
                 int n, int m) 
{  
     set <int> s; 
    for (int i = 0; i < m; i++) 
        s.insert(b[i]);  
        
    for (int i = 0; i < n; i++) 
        if (s.find(a[i]) == s.end())               //Find elements which are present in first array and not in second
            cout << a[i] << " "; 
}  
int main() 
{ 
    int a[] = { 1, 2, 6, 3, 4, 5 }; 
    int b[] = { 2, 4, 3, 1, 0 }; 
    int n = sizeof(a) / sizeof(a[0]); 
    int m = sizeof(b) / sizeof(b[1]); 
    findMissing(a, b, n, m); 
    return 0; 
}  
