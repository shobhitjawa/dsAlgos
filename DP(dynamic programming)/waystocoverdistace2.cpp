#include<iostream> 
using namespace std; 
  
int printCountDP(int dist) 
{ 
    int count[dist+1];  
    count[0]  = 1,  count[1] = 1,  count[2] = 2; 
    for (int i=3; i<=dist; i++) 
       count[i] = count[i-1] + count[i-2] + count[i-3]; 
                                                               //number of ways to cover a distance dp approach.
    return count[dist]; 
}  
int main() 
{ 
    int dist = 4; 
    cout << printCountDP(dist); 
    return 0; 
} 
