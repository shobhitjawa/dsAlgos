#include<iostream> 
#include <bits/stdc++.h> 
#define N 4 
using namespace std;  
bool isLowerTriangularMatrix(int mat[N][N]) 
{ 
    for (int i = 0; i < N; i++) 
        for (int j = 0; j < N; j++) 
        if(i<j)
        {
        	if(mat[i][j]!=0)
        	{
        		return false;
			}
		}
    return true; 
}                                                        //check lower triangular matrix.
int main() 
{ 
    int mat[N][N] = { { 1, 0, 0, 0 }, 
                      { 1, 4, 0, 1 }, 
                      { 4, 6, 2, 0 }, 
                      { 0, 4, 7, 6 } };  
    if (isLowerTriangularMatrix(mat)) 
        cout << "Yes"; 
    else
        cout << "No"; 
    return 0; 
} 
