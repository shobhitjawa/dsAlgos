#include<bits/stdc++.h> 
using namespace std;  
bool checkDuplicatesWithinK(int arr[], int n, int k) 
{    
set<int> s1;
int count=0;
for(int i=0;i<n;i++)
{
	if(count<=k)
	{
	if(s1.find(arr[i])!=s1.end())
	{
		//found
		return true;                           //duplicates within k.
	}
	else{
		s1.insert(arr[i]);
	}
 }
 count+=1;
 }
 return false;
}  
int main () 
{ 
    int arr[] = {10, 5, 8, 4, 3, 5, 6}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    if (checkDuplicatesWithinK(arr, n, 3)) 
        cout << "Yes"; 
    else
        cout << "No"; 
} 
