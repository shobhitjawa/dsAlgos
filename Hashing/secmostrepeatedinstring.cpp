#include <bits/stdc++.h> 
using namespace std;  
string secMostRepeated(vector<string> &seq) 
{  
map<string,int>m1;
for(int i=0;i<seq.size();i++)
  {
    m1[seq[i]]++;	
  }
map<string,int> ::iterator it;
int max=0;
int secmax=0;
string f="";
	for(it=m1.begin();it!=m1.end();it++)
	{
		if(it->second>max)                               //Second most repeated word in a sequencew amazon question.
		{
			secmax=max;
			max=it->second;
	    } 
	}
	int t=0;
		for(it=m1.begin();it!=m1.end();it++)
	{
		 
		 if(max-it->second>t)
		 {
		 	t=max-it->second;  
		 }
	} 
		for(it=m1.begin();it!=m1.end();it++)
	{
	 if(it->second==t)
	 {
	 	f=it->first;
	 	break;
	 }
	}
	return f; 
	  
}  
int main() 
{ 
    vector<string> seq;
    seq.push_back("ccc");
     seq.push_back("aaa");
     seq.push_back("ccc");
     seq.push_back("ddd");
     seq.push_back("aaa");
     seq.push_back("aaa");
    
    cout << secMostRepeated(seq); 
    return 0; 
} 
