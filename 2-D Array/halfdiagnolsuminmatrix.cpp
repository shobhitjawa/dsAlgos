#include <stdio.h> 
#include<bits/stdc++.h> 
using namespace std;  
const int MAX = 100;  
bool HalfDiagonalSums(int mat[][MAX], int n) 
{      
    int diag1_left = 0, diag1_right = 0; 
    int diag2_left = 0, diag2_right = 0;     
    for (int i = 0, j = n - 1; i < n; i++, j--) { 
          
        if (i < n/2) { 
            diag1_left += mat[i][i]; 
            diag2_left += mat[j][i];            
        } 
        else if (i > n/2) { 
            diag1_right += mat[i][i];  
            diag2_right += mat[j][i];             //half diagnol sum in matrix.
        } 
    }  
    return (diag1_left == diag2_right &&  
            diag2_right == diag2_left && 
            diag1_right == diag2_left && 
            diag2_right == mat[n/2][n/2]); 
}  
int main() 
{ 
    int a[][MAX] = { { 2, 9, 1, 4, -2}, 
                     { 6, 7, 2, 11, 4},  
                     { 4, 2, 9, 2, 4}, 
                     { 1, 9, 2, 4, 4}, 
                     { 0, 2, 4, 2, 5} }; 
        cout << ( HalfDiagonalSums(a, 5) ? "Yes" : "No" ); 
    return 0; 
} 
