#include<bits/stdc++.h> 
using namespace std; 
  
string getString(char x) 
{   
string g="";
 char myword[] = { 'H' , 'e' , 'l' , 'l' , 'o'};               //convert a single char to string .
 for(int i=0;i<5;i++)
 {
 	string s(1,myword[i]); 
 	g=g+s;
 }
 return g; 
} 
  
int main() { 
  cout << getString('a'); 
  return 0; 
} 
