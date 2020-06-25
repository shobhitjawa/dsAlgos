#include<bits/stdc++.h> 
using namespace std;  
int countPairs(int arr[] , int n) 
{   
set<int> s1;
int temp_product;
for(int i=0;i<n;i++)
{
	s1.insert(arr[i]);
 } 
 int count=0;
 for(int i=0;i<n;i++)
 {
 	for(int j=i+1;j<n;j++)
 	{
 	temp_product=arr[i]*arr[j];
 	if(s1.find(temp_product)!=s1.end())                            //Count pairs whose products exist in array
 	{
 		count++;
	 }
	 }
 }
 return count;
}  
int main() 
{ 
    int arr[] = {6 ,2 ,4 ,12 ,5 ,3}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << countPairs(arr, n) ; 
    return 0; 
} 
