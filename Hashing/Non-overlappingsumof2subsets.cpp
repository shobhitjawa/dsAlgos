#include<iostream>
#include <bits/stdc++.h> 
using namespace std;   
int findSum(int A[], int B[], int n) 
{   
     map<int, int> hash;     
    for (int i = 0; i < n; i++) { 
        hash[A[i]]++; 
        hash[B[i]]++; 
    }   
     int sum=0;                                             //non overlapping sum of 2 subsets.
          map<int, int> ::iterator its;
          for(its=hash.begin();its!=hash.end();++its)
          {
          	if(its->second==1)
          	{
          		sum=sum+its->first;
			  }
		  }
		  return sum;
}  
int main() 
{ 
    int A[] = { 5, 4, 9, 2, 3 }; 
    int B[] = { 2, 8, 7, 6, 3 };  
    int n = sizeof(A) / sizeof(A[0]);  
    cout << findSum(A, B, n);  
    return 0; 
} 
