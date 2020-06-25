#include <bits/stdc++.h> 
using namespace std; 
void convert(int arr[], int n) 
{  
    int temp[n]; 
    memcpy(temp, arr, n*sizeof(int));  
    sort(temp, temp + n);   
     map<int, int> umap;  
   //  int x=0;
    for(int i=0;i<n;i++)
    {
    	umap[temp[i]]=i;
	}
	for(int i=0;i<n;i++)
	{
		arr[i]=umap[arr[i]];                                      //Convert an array to reduced form
	}
} 
void printArr(int arr[], int n) 
{ 
    for (int i=0; i<n; i++) 
        cout << arr[i] << " "; 
}  
int main() 
{ 
    int arr[] = {10, 20, 15, 12, 11, 50}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    cout << "Given Array is \n"; 
    printArr(arr, n); 
  
    convert(arr , n); 
  
    cout << "\n\nConverted Array is \n"; 
    printArr(arr, n); 
  
    return 0; 
} 
