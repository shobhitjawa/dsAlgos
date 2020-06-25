#include <bits/stdc++.h> 
using namespace std;  
bool areEqual(int arr1[], int arr2[], int n, int m) 
{  
map<int,int> m1;
     if(n!=m)
	 {
	 	return false;
	}
	else{
	 
	for(int i=0;i<n;i++)
	{
		m1[arr1[i]]++;                 //Time Complexity : O(n)
                               //Auxiliary Space : O(n)
	}
	for(int i=0;i<m;i++)
	{
		if(m1.find(arr2[i])==m1.end())
		return false;
		
		if (m1[arr2[i]] == 0) 
            return false; 
  
        m1[arr2[i]]--; 
	}
    }
    for(int i=0;i<m;i++)
    {
    	if(m1[arr1[i]]!=0)
    	{
    		return false;
		}
	}
    return true;
}  
int main() 
{ 
    int arr1[] = { 3, 5, 2, 5, 2 }; 
    int arr2[] = { 2, 3, 5, 5, 2 }; 
    int n = sizeof(arr1) / sizeof(int); 
    int m = sizeof(arr2) / sizeof(int); 
  
    if (areEqual(arr1, arr2, n, m)) 
        cout << "Yes"; 
    else
        cout << "No"; 
    return 0; 
} 
