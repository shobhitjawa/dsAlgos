#include<stdio.h>
#include<iostream>
#include <bits/stdc++.h> 
using namespace std; 
  
void towerOfHanoi(int n, char from_rod, 
                    char to_rod, char aux_rod)  
{  
    if (n == 1)  
    {  
        cout << "Move disk 1 from rod " << from_rod <<  
                            " to rod " << to_rod<<endl;  
        return;  
    }  
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);                //tower of hanoi problem using recursion.
    cout << "Move diskx " << n << " from rod " << from_rod <<              //For n disks, total 2^n � 1 moves are required.
                                " to rod " << to_rod << endl;  
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);  
}   
int main()  
{  
    int n = 4;  
    towerOfHanoi(n, 'A', 'C', 'B');  
    return 0;  
}  
  
