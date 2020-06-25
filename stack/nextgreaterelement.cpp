#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printNGE(int arr[], int n) 
{
 stack<int> s1;
 s1.push(arr[0]);
  for (int i = 1; i < n; i++) { 
  
    if (s1.empty()) { 
      s1.push(arr[i]); 
      continue; 
    }  
     while (s1.empty() == false && s1.top() < arr[i])               //next greater element in a array time complex-O(n).
    {          
        cout << s1.top() << " --> " << arr[i] << endl; 
        s1.pop();  
    } 
     s1.push(arr[i]);   
 }
  while (s1.empty() == false) { 
    cout << s1.top() << " --> " << -1 << endl; 
    s1.pop();  
  } 
 
}
int main()
{
  int arr[] = {11, 13, 21, 3,24}; 
  int n = sizeof(arr) / sizeof(arr[0]); 
  printNGE(arr, n); 
  return 0; 
}
