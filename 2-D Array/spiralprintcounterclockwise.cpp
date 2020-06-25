#include <bits/stdc++.h> 
using namespace std;  
#define R 4 
#define C 4  
void counterClockspiralPrint(int m,  
                             int n,  
                             int arr[R][C]) 
{ 
    int i, k = 0, l = 0;  
    int cnt = 0;  
    int total = m * n;  
    while (k < m && l < n)  
    { 
        if (cnt == total) 
            break;  
        for (i = k; i < m; ++i) 
        { 
            cout << arr[i][l] << " "; 
            cnt++; 
        } 
        l++;  
        if (cnt == total) 
            break;  
        for (i = l; i < n; ++i)  
        { 
            cout << arr[m - 1][i] << " "; 
            cnt++; 
        } 
        m--;  
        if (cnt == total) 
            break;  
        if (k < m)  
        { 
            for (i = m - 1; i >= k; --i)  
            { 
                cout << arr[i][n - 1] << " "; 
                cnt++;                                               //print spiral counter -clockwise
            } 
            n--; 
        } 
  
        if (cnt == total) 
            break;  
        if (l < n)  
        { 
            for (i = n - 1; i >= l; --i)  
            { 
                cout << arr[k][i] << " "; 
                cnt++; 
            } 
            k++; 
        } 
    } 
}  
int main() 
{ 
    int arr[R][C] = {{ 1, 2, 3, 4 }, 
                     { 5, 6, 7, 8 }, 
                     { 9, 10, 11, 12 }, 
                     { 13, 14, 15, 16 }}; 
    counterClockspiralPrint(R, C, arr); 
    return 0; 
} 

