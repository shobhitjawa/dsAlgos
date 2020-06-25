#include <bits/stdc++.h> 
#define N 4 
using namespace std;   
void rotateMatrix(int mat[][N]) 
{ 
 for (int i = 0; i < N; i++) 
 {
        for (int j = i+1; j < N; j++)
		 {
            swap(mat[i][j], mat[j][i]);
        }
  }  
  for(int i=0;i<N;i++)
  {
  	for(int j=0;j<N/2;j++)
  	{
	  
  		swap(mat[i][j],mat[i][N-1-j]);             //rotate a matrix by 90 degree without using extra space .google interview question.
  }
 }
	   for(int i=0;i<N;i++)
  {
  	for(int j=0;j<N;j++)
  	{
  		 cout<<mat[i][j]<<" ";
	  }
	  cout<<endl;
  }
}   
int main() 
{  
    int mat[N][N] = 
    { 
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12}, 
        {13, 14, 15, 16} 
    };  
   
    rotateMatrix(mat);   
  
    return 0; 
} 
