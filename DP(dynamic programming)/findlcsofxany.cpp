#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void lcsof(char *X,char *Y,int m,int n)
{
	int i,j;
	
    int L[m + 1][n + 1];  
    for (i = 0; i <= m; i++)  
    {  
        for (j = 0; j <= n; j++)  
        {  
        if (i == 0 || j == 0)  
            L[i][j] = 0;                          //longest common subsequence of 2 strings -DP time complexity-O(m*n)
      
        else if (X[i - 1] == Y[j - 1])  
            L[i][j] = L[i - 1][j - 1] + 1;  
      
        else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);  
        }  
    }  
    int index= L[m][n];
	char lcs[index+1];
	lcs[index]='\0';
	i=m,j=n;
	while(i>0&&j>0)
	{
		if(X[i-1]==Y[j-1])
		{
			lcs[index-1]=X[i-1];
			i--;
			j--;
			index--;
		}
		else if(L[i-1][j]>L[i][j-1])
		i--;
		else
		j--;
	  }  
	  cout<<" LCS of "<<X<<" and "<<Y<<" is "<<lcs;
}  
int max(int a, int b)  
{  
    if (a > b)
	return a;
    else
	return b;	  
}  
  
int main()
{
     char X[] = "AGGTA";  
    char Y[] = "GXTXAYB"; 
 int m = strlen(X);  
    int n = strlen(Y); 
 lcsof(X,Y,m,n);
 return 0;
}
