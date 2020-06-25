#include <bits/stdc++.h> 
using namespace std;   
int find(int a[], int b[], int k, int n1, int n2) 
{  
    set<int> s1;
	for(int i=0;i<n2;i++)
	{
		s1.insert(b[i]);
	 } 
	 int count=0;                                        //k-th missing element in increasing sequence which is not present in a given sequence
	 for(int i=0;i<n1;i++)
	 {
	 	if(s1.find(a[i])==s1.end())
	 	{
	 		count++;
		 }
		 if(count==k)
		 {
		 	return a[i];
		 }
	 }
	 return -1;
}   
int main() 
{ 
    int a[] = { 0, 2, 4, 6, 8, 10, 12, 14, 15 }; 
    int b[] = { 4, 10, 6, 8, 12 }; 
    int n1 = sizeof(a) / sizeof(a[0]); 
    int n2 = sizeof(b) / sizeof(b[0]); 
  
    int k = 3; 
    cout << find(a, b, k, n1, n2); 
    return 0; 
} 
