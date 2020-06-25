#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
# define N 4
 const int m=4;
  const int n=4;
using namespace std;
bool matrix[m][n] = {{0, 0, 1, 0}, 
                    {0, 0, 1, 0}, 
                    {0, 0, 0, 0}, 
                    {0, 0, 1, 0}}; 
bool knows(int a,int b);
int findCelebrity(bool matrix[m][n],int n)
{
	stack<int> s1;
	int C;
	for(int  i=0;i<n;i++)
	{
		s1.push(i);
	} 
		int A=s1.top();
		s1.pop();
		int B=s1.top();
		s1.pop();
	while(s1.size()>=2)
	{
	   if(knows(A,B))
	   {
	   	A=s1.top();
	   	s1.pop();
	   }
	   else                          //celebrity problem using stack time complexity -O(n).
	   {
	   	B=s1.top();
	   	s1.pop();
	   }
	}
	C=s1.top();
	s1.pop();
	if (knows(C, B)) 
        C = B; 
  
    if (knows(C, A)) 
        C = A; 
        
         for (int i = 0; i < n; i++) 
    {  
        if ( (i != C) && 
                (knows(C, i) ||  
                 !knows(i, C)) ) 
            return -1; 
    } 
  
    return C; 
	
}
bool knows(int a,int b)
{
		return matrix[a][b];
}
int main()
{  
		bool matrix[m][n]={{0, 0, 1, 0}, {0, 0, 1, 0},  {0, 0, 0, 0}, {0, 0, 1, 0}}; 
		int id = findCelebrity(matrix,n); 
		if(id==-1)
		{
			cout<<"no celebrity";
		}
		else{ 
		cout<<"celebrity is:"<<id;
	}
		return 0;	
}
