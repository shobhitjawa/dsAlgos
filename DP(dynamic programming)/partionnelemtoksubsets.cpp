#include<iostream> 
using namespace std;  
int countP(int n, int k) 
{  
  if (n == 0 || k == 0 || k > n) 
     return 0; 
  if (k == 1 || k == n) 
      return 1;   
  return  k*countP(n-1, k) + countP(n-1, k-1); 
}                                               //number of ways to partion n elements to k subsets recursive approach.
int main() 
{ 
   cout <<  countP(3, 2); 
   return 0; 
} 
