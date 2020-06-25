 
#include<bits/stdc++.h> 
using namespace std; 
  
int Identity(int num) 
{ 
    int row, col; 
      
    for (row = 0; row < num; row++) 
    { 
        for (col = 0; col < num; col++) 
        {                                                     //identity matrix.
            if (row == col) 
                cout << 1 << " "; 
            else
                cout << 0 << " "; 
        }  
        cout << endl; 
    } 
    return 0; 
}  
int main() 
{ 
    int size = 5; 
    Identity(size); 
    return 0; 
} 
  
