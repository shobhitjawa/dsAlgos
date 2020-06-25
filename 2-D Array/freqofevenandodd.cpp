#include<bits/stdc++.h> 
using namespace std;  
#define MAX 100  
void freq(int ar[][MAX], int m, int n) 
{ 
    int even = 0, odd = 0; 
      
    for (int i = 0; i < m; ++i) 
    { 
        for (int j = 0; j < n; ++j) 
        {  
            if ((ar[i][j] % 2) == 0) 
                ++even; 
            else
                ++odd;                                    //frequency of even and odd in a matrix
        } 
    }  
    printf(" Frequency of odd number = %d \n", odd); 
    printf(" Frequency of even number = %d \n", even); 
}  
int main() 
{ 
    int m = 3, n = 3;     
      
    int array[][MAX] = { { 1, 2, 3 }, 
                        { 4, 5, 6 }, 
                        { 7, 8, 9 } }; 
  
    freq(array, m, n); 
    return 0; 
} 
