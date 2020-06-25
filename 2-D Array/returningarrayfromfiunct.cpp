#include<iostream>
using namespace std;
int* mb()
{
printf("enter Any Five number ");
  static int a[5];
for(int i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
return a;
}                                                 //return array from a function
int main()
{
int* b;
b=mb(); 
for(int i=0;i<=4;i++)
{
	cout<<b[i];
}
return 0;
}
