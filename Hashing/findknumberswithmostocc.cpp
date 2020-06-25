#include <bits/stdc++.h> 
using namespace std;   
bool compare(pair<int, int> p1, pair<int, int> p2) 
{                                                                       //imp question.
    if (p1.second == p2.second) 
        return p1.first > p2.first;      
    return p1.second > p2.second;     
}  
void print_N_mostFrequentNumber(int arr[], int n, int k) 
{  
  map<int, int> um; 
    for (int i = 0; i<n; i++)                                     //Time Compelexity O(d log d),where d is the count of distinct elements in the array.
                                                                         	// To sort the array O(d log d) time is needed.
        um[arr[i]]++;    
    vector<pair<int,int> > freq_arr(um.begin(), um.end());   //Find k numbers with most occurrences in the given array
    sort(freq_arr.begin(), freq_arr.end(), compare);  
    cout << k << "numbers with most occurrences are:\n"; 
    for (int i = 0; i<k; i++) 
        cout << freq_arr[i].first << " ";                              // Auxiliary Space: O(d), where d is the count of distinct elements in the array.
		                                                             // To store the elements in HashMap O(d) space complexity is needed
}  
int main() 
{ 
    int arr[] = {3, 1, 4, 4, 5, 2, 6, 1}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int k = 2; 
    print_N_mostFrequentNumber(arr, n, k); 
    return 0; 
} 
