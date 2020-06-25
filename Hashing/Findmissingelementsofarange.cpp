#include <bits/stdc++.h> 
using namespace std;  
void printMissing(int arr[], int n, int low, 
                  int high) 
{  
 set<int> s1;
 for(int i=0;i<n;i++)
 {
 	s1.insert(arr[i]);
 }
 for(int i=low;i<=high;i++)                      //Find missing elements of a range
 {
 	if(s1.find(i)==s1.end())
 	{
 		cout<<i<<" ";
	 } 
 }
}  
int main() 
{ 
    int arr[] = { 1, 3, 5, 4 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int low = 1, high = 10; 
    printMissing(arr, n, low, high); 
    return 0; 
}
