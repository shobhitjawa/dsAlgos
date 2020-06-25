#include<bits/stdc++.h>  
#include<iostream>
using namespace std;
int permutationCoeff(int n, int k) 
{ 
    int fact[n + 1];  
    fact[0] = 1;  
    for (int i = 1; i <= n; i++)                    //permutation cofficient time complexity   -O(n).
        fact[i] = i * fact[i - 1];  
    return fact[n] / fact[n - k]; 
}  
int main() 
{ 
    int n = 10, k = 2; 
    printf("Value of P(%d, %d) is %d ", 
            n, k, permutationCoeff(n, k)); 
    return 0; 
} 

