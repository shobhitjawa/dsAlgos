 #include<bits/stdc++.h> 
using namespace std;  
bool areDisjoint(int set1[], int set2[], int n1, int n2) 
{   
  set<int> s1;
  for(int i=0;i<n1;i++)
  {
  	s1.insert(set1[i]);
  }
  for(int i=0;i<n2;i++)
  {                                                              //disjoint set Time complexity of the above implementation is O(m+n) 
                                                           //under the assumption that hash set operations like add() and contains() work in O(1) time.
  	if(s1.find(set2[i])!=s1.end())
  	{
  		return false;
	  }
  }
  return true;
}  
int main() 
{ 
    int set1[] = {10, 5, 3, 4, 6}; 
    int set2[] = {8, 7, 9, 3}; 
  
    int n1 = sizeof(set1) / sizeof(set1[0]); 
    int n2 = sizeof(set2) / sizeof(set2[0]); 
    if (areDisjoint(set1, set2, n1, n2)) 
        cout << "Yes"; 
    else
        cout << "No"; 
} 
