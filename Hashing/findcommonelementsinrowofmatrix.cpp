#include <bits/stdc++.h> 
using namespace std;  
#define M 4 
#define N 5   
void printCommonElements(int mat[M][N]) 
{ 
map<int,int> m1;
 for(int j=0;j<N;j++)
 {
 	m1[mat[0][j]]=1;
 }
 int k=1;
 for(int i=1;i<M;i++)
 {  
  	for(int j=0;j<N;j++)
 	{
 		if(m1[mat[i][j]]==k)               //Common elements in all rows of a given matrix
 		{
 			m1[mat[i][j]]=k+1;
		 if(k==M-1)
		 cout<<mat[i][j]<<" ";
      	}
	 }
	 k++;
 }
}  
int main() 
{ 
    int mat[M][N] = 
    { 
        {1, 2, 1, 4, 8}, 
        {3, 7, 8, 5, 1}, 
        {8, 7, 7, 3, 1}, 
        {8, 1, 2, 7, 9}, 
    }; 
  
    printCommonElements(mat); 
  
    return 0; 
} 
