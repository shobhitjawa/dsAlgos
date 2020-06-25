#include<bits/stdc++.h> 
#define MAX 100 
  
using namespace std;  
void permutatedRows(int mat[][MAX], int m, int n, int r) 
{ 
 set<int> s1;
 for(int i=0;i<n;i++)
  {
  s1.insert(mat[r][i]);	
  }    
  int count;
  for(int i=0;i<m;i++)
  {
  	count=0;
  	for(int j=0;j<n;j++)
  	{                                                               //Find all permuted rows of a given row in a matrix
  		if(s1.find(mat[i][j])!=s1.end())
  		{
  			count++;
		  }
		  if(count==m)
		  {
		  	if(i!=r)
		  	{
		  	cout<<i<<endl;
		  	break;
		  }
	   }  
	  }
  }
}  
int main() 
{ 
    int m = 4, n = 4,r = 3; 
    int mat[][MAX] = {{3, 1, 4, 2}, 
                      {1, 6, 9, 3}, 
                      {1, 2, 3, 4}, 
                      {4, 3, 2, 1}}; 
    permutatedRows(mat, m, n, r); 
    return 0; 
}
