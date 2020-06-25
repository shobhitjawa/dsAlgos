#include<stdio.h>
#include<stack>
#include<iostream>
using namespace std;
int reverse_number(int n)
{
	stack<int>s1;
int count=0;
int reverse=0;
int i=1;
while(n!=0)
{                                  //reverse a number using single stack      //Time Complexity: O( logN )
                                                                             //Auxiliary Space: O( logN ),
	s1.push(n%10);
	n=n/10;
}
while(s1.empty()==false)
{
	reverse=reverse +(s1.top()*i);
 
	s1.pop();
		i=i*10;
}
return reverse;
}

int main() 
{ 
    int number = 39997;  
     cout<<reverse_number(number); 
      
    return 0; 
} 
