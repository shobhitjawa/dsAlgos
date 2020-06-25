#include<stdio.h>
#include<iostream>
using namespace std;
unsigned ugly(unsigned n)
{
unsigned u[n];
unsigned i2=0,i3=0,i5=0;
unsigned next_m_of_2=2;
unsigned next_m_of_3=3;
unsigned next_m_of_5=5;
unsigned next_ugly_no=1;
u[0]=0;
for(int i=1;i<n;i++)
{
	 next_ugly_no = min(next_m_of_2, 
                           min(next_m_of_3, 
                               next_m_of_5)); 
 //                              break;
 	
 u[i]=next_ugly_no;
 	if(next_ugly_no==next_m_of_2)
 	{
 		i2=i2+1;
 		next_m_of_2=u[i2]*2;            //ugly numbers DP  time comlexity-O(n)
 		                                   //space Complexity-O(n).
	 }
	 	if(next_ugly_no==next_m_of_3)
 	{
 		i3=i3+1;
 		next_m_of_3=u[i3]*3;
	 }
	 	if(next_ugly_no==next_m_of_5)
 	{
 			i5=i5+1;
 		next_m_of_5=u[i5]*5;
	 }
 } 
 return next_ugly_no;
}
int main()
{
	int n=150;
	cout<<ugly(n);
	return 0;
}

