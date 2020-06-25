#include <iostream> 
#include <queue> 
#define V 4  
using namespace std;  
bool isBipartite(int G[][V], int src) 
{  
   int colorarr[V];
   for(int i=0;i<V;i++)
   {
   	colorarr[i]=-1;
   }
   colorarr[src]=1;
   queue<int> q1;
   q1.push(src);
   while(q1.empty()==false)
   {
   	int temp=q1.front();
   	q1.pop();
   	if(G[temp][temp]==1)
   	{
   		return false;                                          //Check whether a given graph is Bipartite or not
	   }
	   for(int i=0;i<V;i++)
	   {
	   	if(G[temp][i]&&colorarr[i]==-1)
	   	{
	   		colorarr[i]=1-colorarr[temp];
	   		q1.push(i);
		   }
		   else if(G[temp][i]&&colorarr[temp]==colorarr[i])
		   {
		   	return false;
		   }
	   }
	    
   }
   return true;
}   
int main() 
{ 
    int G[][V] = {{0, 1, 0, 1}, 
        {1, 0, 1, 0}, 
        {0, 1, 0, 1}, 
        {1, 0, 1, 0} 
    }; 
  
    isBipartite(G, 0) ? cout << "Yes" : cout << "No"; 
    return 0; 
} 
