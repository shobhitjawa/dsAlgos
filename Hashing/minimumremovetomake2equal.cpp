#include <bits/stdc++.h> 
using namespace std;  
int minRemove(int a[], int b[], int n, int m) 
{  
map<int,int> m1;
map<int,int> m2;
for(int i=0;i<n;i++)
{
	m1[a[i]]++;
 } 
for(int i=0;i<m;i++)
{
	m2[b[i]]++;
 }                                   //Remove minimum number of elements such that no common element exist in both array
 int count=0;
 map<int,int>:: iterator itr;
 for(itr=m1.begin();itr!=m1.end();itr++)
 {
 	if(m2.find(itr->first)!=m2.end())
 	{
 		count=count+min(itr->second,m2[itr->first]);
	 }
 }
 return count;
}  
int main() 
{ 
    int a[] = { 1, 2, 3, 4 }; 
    int b[] = { 2, 3, 4, 5, 8 }; 
    int n = sizeof(a) / sizeof(a[0]); 
    int m = sizeof(b) / sizeof(b[0]); 
  
    cout << minRemove(a, b, n, m); 
  
    return 0; 
} 
