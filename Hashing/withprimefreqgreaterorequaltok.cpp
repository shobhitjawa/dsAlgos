#include<iostream>
#include<bits/stdc++.h>
void primeOccurences(int arr[],int k)
{
	map<int,int> m1;
    for(int i=0;i<12;i++)
    {
    	m1[arr[i]++;
	}
	bool c;
	map<int,int>::iterator itr;
	for(itr=m1.begin();itr!=m1.end();itr++)
	{
	     if(itr->second>=k)
	     {
	     c=isprimecheck(itr->second);
	     cout<<c;
		 }
	}
	
}
bool isprimecheck(int x)
{
	int count=0;
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		return true;
	}
	else{
		return false;
	}
}
int main()
{
int arr[] = {11, 11, 11, 23,  
                 11, 37, 37, 51,  
                 51, 51, 51, 51}; 
    int k = 2; 
    primeOccurences(arr, k); 
    return 0; 
} 	

