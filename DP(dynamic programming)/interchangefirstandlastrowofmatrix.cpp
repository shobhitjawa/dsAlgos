#include <iostream> 
using namespace std;  
#define n 4  
void interchangeFirstLast(int m[][n]) 
{ 
        int rows = n;  
        for (int i = 0; i < n; i++) 
        { 
            int t = m[0][i]; 
            m[0][i] = m[rows - 1][i]; 
            m[rows - 1][i] = t; 
        } 
}   
int main()                                                         //interchange first and last rows.
{  
    int m[n][n] = { { 8, 9, 7, 6 }, 
                { 4, 7, 6, 5 }, 
                { 3, 2, 1, 8 }, 
                { 9, 9, 7, 7 } };  
                  
    interchangeFirstLast(m);   
    for (int i = 0; i < n; i++) 
    { 
        for (int j = 0; j < n; j++)  
            cout << m[i][j] << " "; 
        cout << endl; 
    } 
} 
