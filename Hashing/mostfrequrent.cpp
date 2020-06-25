 #include <bits/stdc++.h> 
using namespace std;  
int mostFrequent(int arr[], int n) 
{ 
int x;
    map<int,int> s1;
    for(int i=0;i<n;i++)
    {
      s1[arr[i]]++;
	}
	int max=0;
	map<int,int>::iterator itr;
	for(itr=s1.begin();itr!=s1.end();++itr)
	{
		if(max<itr->second)
		{
			max=itr->second;
		}
    }
	for(itr=s1.begin();itr!=s1.end();itr++)                  //Most frequent element in an array
	{
		if(max==itr->second)
		{
		  x=itr->first;
			break;
		}
	}
	return x;
}  
int main() 
{ 
    int arr[] = { 1, 5, 2, 1, 3, 2, 1 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << mostFrequent(arr, n); 
    return 0; 
} 
