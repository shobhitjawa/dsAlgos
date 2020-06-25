#include <bits/stdc++.h> 
using namespace std;  
void findPair(int arr[], int n) 
{ 
     set<int> s1;
     for(int i=0;i<n;i++)
    {
     	s1.insert(arr[i]);
	}
	int flag=0;
	for(int i=0;i<n;i++)
	{	
		for(int j=i+1;j<n;j++)                           //Find pairs in array whose sums already exist in array
		{
			int temp_sum=arr[i]+arr[j];		
	     if(s1.find(temp_sum)!=s1.end())
	     {
	     	cout<<arr[i]<<","<<arr[j];
	     	flag=1;
		 }
		}
	}
	if(flag==0)
	{
		cout<<"Not exist";
	}
}  
int main() 
{ 
    int arr[] = { 10, 4, 8, 13, 5 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    findPair(arr, n); 
    return 0; 
} 
