 #include <bits/stdc++.h> 
using namespace std;  
void printPairs(int arr[], int n) 
{ 
vector<int> v; 
  map<int,int> m1;
     for(int i=0;i<n;i++)
     {
     		if(m1[abs(arr[i])]==0)
     		{
     			m1[abs(arr[i])]=1;
			 }                                       //Pairs of Positive Negative values in an array
			 else{
			v.push_back(abs(arr[i]));		    
			 }
	 }
	   if (v.size() == 0) 
        return; 
  
    sort(v.begin(), v.end()); 
    for (int i = 0; i < v.size(); i++) 
        cout << -v[i] << " " << v[i] << " "; 
}   
int main() 
{ 
    int arr[] = { 4, 8, 9, -4, 1, -1, -8, -9 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    printPairs(arr, n); 
    return 0; 
} 
