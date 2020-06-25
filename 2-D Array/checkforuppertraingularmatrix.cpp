  
#include <bits/stdc++.h> 
#define N 4 
using namespace std;  
bool isUpperTriangularMatrix(int mat[N][N]) 
{ 
    for (int i = 1; i < N; i++) 
        for (int j = 0; j < i; j++) 
            if (mat[i][j] != 0) 
                return false;                                     //program to check if a matrix is upper triangular matrix.
    return true; 
}  
int main() 
{ 
    int mat[N][N] = { { 1, 3, 5, 3 }, 
                      { 0, 4, 6, 2 }, 
                      { 0, 0, 2, 5 }, 
                      { 0, 0, 0, 6 } }; 
    if (isUpperTriangularMatrix(mat)) 
        cout << "Yes"; 
    else
        cout << "No"; 
    return 0; 
} 
