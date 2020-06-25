#include <iostream> 
using namespace std; 
int main() 
{  
    int *p;   
    int (*ptr)[5];  
    int arr[5];  
    p = arr;  
    ptr = &arr;   
    cout << "p =" << p <<", ptr = "<< ptr<< endl; 
    p++;                                                          //pointer to an array.
    ptr++; 
    cout << "p =" << p <<", ptr = "<< ptr<< endl; 
      
    return 0; 
} 
  
