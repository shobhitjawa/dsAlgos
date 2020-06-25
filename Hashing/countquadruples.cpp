#include <bits/stdc++.h> 
using namespace std;  
int countQuadruples(int arr1[], int arr2[], int arr3[], 
                    int arr4[], int n, int x) 
{ 
map<int,int> m1;
 int count=0;
 for(int i=0;i<n;i++)
 {
 	for(int j=0;j<n;j++)
 	{
 		m1[arr1[i]+arr2[j]]++;
	 }
 } 
 int temp_sum;
 for(int i=0;i<n;i++)
 {                                                                //Count quadruples from four sorted arrays whose sum is equal to a given value x
 	for(int j=0;j<n;j++)
 	{
 		temp_sum=arr3[i]+arr4[j];
 		
 		if(m1.find(x-temp_sum)!=m1.end())
 		{
 			count=count+m1[x-temp_sum];
		 }
	 }
 }
 return count;
}   
int main() 
{  
    int arr1[] = { 1, 4, 5, 6 }; 
    int arr2[] = { 2, 3, 7, 8 }; 
    int arr3[] = { 1, 4, 6, 10 }; 
    int arr4[] = { 2, 4, 7, 8 }; 
  
    int n = sizeof(arr1) / sizeof(arr1[0]); 
    int x = 30; 
    cout << "Count = "
         << countQuadruples(arr1, arr2, arr3, arr4, n, x); 
    return 0; 
}
