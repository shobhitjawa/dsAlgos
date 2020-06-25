#include <bits/stdc++.h> 
using namespace std;  
const int MAX = 100;  
void imageSwap(int mat[][MAX], int n) 
{  
    for (int i = 0; i < n; i++) 
        for (int j = 0; j <= i; j++)  
            mat[i][j] = mat[i][j] + mat[j][i] -  
                       (mat[j][i] = mat[i][j]);        
}  
void printMatrix(int mat[][MAX], int n) 
{ 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) 
            cout << mat[i][j] << " "; 
        cout << endl; 
    } 
}  
int main() 
{ 
    int mat[][MAX] = { { 1, 2, 3, 4 }, 
                     { 5, 6, 7, 8 }, 
                     { 9, 10, 11, 12 }, 
                     { 13, 14, 15, 16 } }; 
    int n = 4; 
    imageSwap(mat, n); 
    printMatrix(mat, n); 
    return 0; 
} 

