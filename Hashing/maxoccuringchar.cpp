#include<bits/stdc++.h> 
#define ASCII_SIZE 256 
using namespace std;   
char getMaxOccuringChar(char* str) 
{ 
int len=strlen(str);
map<char,int> m1;
     for(int i=0;i<len;i++)
     {
     	m1[str[i]]++;
	 }
	 int max=0;
	 char x;
	map<char,int> :: iterator it;
	for(it=m1.begin();it!=m1.end();it++)
	{                                     //Time Complexity: O( n)
                                               //Space Complexity: O(1)
		if(max<it->second)
		{
			max=it->second;
			x=it->first;
		}
	}
	return x;
}  
int main() 
{ 
    char str[] = "sample string"; 
    cout << "Max occurring character is "
         << getMaxOccuringChar(str); 
} 
