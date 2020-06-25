#include<iostream> 
#include <list> 
#include<queue>
  
using namespace std;  
class Graph 
{ 
    int V;   
    list<int> *adj;    
public: 
    Graph(int V);    
    void addEdge(int v, int w);    
    int BFS(int s);   
}; 
                                                             //time complexity--> O(V(E+V))
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w);  
} 
  
int Graph::BFS(int s) 
{  
    bool *visited = new bool[V]; 
    for(int i = 0; i < V; i++) 
        visited[i] = false;  
    queue<int> queue;  
    visited[s] = true; 
    queue.push(s);  
    list<int>::iterator i; 
        int count=0;                            //find mother vertex in a graph.
    while(!queue.empty()) 
    {  
        s = queue.front(); 
       // cout << s << " ";
		count++; 
        queue.pop();  
        for (i = adj[s].begin(); i != adj[s].end(); ++i) 
        { 
            if (!visited[*i]) 
            { 
                visited[*i] = true; 
                queue.push(*i); 
            }                                      //bfs for a graph
        } 
    } 
    return count;
}  
int main() 
{  
    Graph g(7); 
   g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 3); 
    g.addEdge(4, 1); 
    g.addEdge(6, 4); 
    g.addEdge(5, 6); 
    g.addEdge(5, 2); 
    g.addEdge(6, 0);    
    	list<int> l1;
	for(int i=0;i<7;i++)
	{
		int c=g.BFS(i); 
		l1.push_back(i);
	 }
	 l1.sort();  
	    list <int> :: iterator it; 
	  it=l1.end();
	   for(int i=0;i<7;i++)
          {
          	int d=g.BFS(i);
          	if(d==*it)
          	{
          		cout<<i;
          		break;
			  }
		  }
    return 0; 
} 
