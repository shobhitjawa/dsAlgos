#include<iostream> 
using namespace std;  
int printCountRec(int dist) 
{  
    if (dist<0)      return 0; 
    if (dist==0)  return 1;  
    return printCountRec(dist-1) + printCountRec(dist-2) + printCountRec(dist-3); 
}                                                               //number of ways to cover a distance recursive appproach.cpp
int main() 
{ 
    int dist = 4; 
    cout << printCountRec(dist); 
    return 0; 
} 
