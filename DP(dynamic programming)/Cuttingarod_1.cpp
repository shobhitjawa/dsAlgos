#include<stdio.h>
#include<iostream>
using namespace std;
int isChangeable(int a[],int n)
{
	int fivec=0;
	int tenc=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==5)
	     fivec++;
	     else if(a[i]==10)
	     {
	     	if(fivec>0)
	     	{ 
	     	tenc++;
	     	fivec--;
	        }                        //ice cream problem.
		 }
		 else{
		 	if(fivec>0&&tenc>0)
		 	{
		 		fivec--;
		 		tenc--;
			 }
			 else if(fivec>=3){
			  
			 		fivec=fivec-3;
				 }
				 else
				 return 0;
			 }
		 } 
	return 1;
} 
int main()
{
	int a[] = { 5, 5, 5, 10, 20 }; 
    int n = sizeof(a) / sizeof(a[0]);  
    if (isChangeable(a, n)==1) 
        cout << "YES"; 
   