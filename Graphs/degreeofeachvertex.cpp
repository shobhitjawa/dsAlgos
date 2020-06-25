#include<bits/stdc++.h> 
using namespace std;   
class Graph 
{ 
    int V;    
    list<int> *adj; 
public: 
    Graph(int V); 
    void addEdge(int u, int v);  
    void degree(); 
}; 
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
void Graph::addEdge(int u, int v) 
{ 
    adj[u].push_back(v); 
}   
void Graph::degree() 
{   
    vector<int> in_degree(V, 0);  
    for (int u=0; u<V; u++) 
    { 
        list<int>::iterator itr; 
        for (itr = adj[u].begin(); itr != adj[u].end(); itr++) 
             in_degree[*itr]++; 
    } 
    for(int i=0;i<6;i++)
    {
    	cout<<i<<endl;
	}
   vector<int>::iterator itr;
   for(itr=in_degree.begin();itr!=in_degree.end();itr++)
   {
   	cout<<*itr<<" ";
   }
}  
int main() 
{  
    Graph g(6); 
    g.addEdge(5, 2); 
    g.addEdge(5, 0); 
    g.addEdge(4, 0); 
    g.addEdge(4, 1); 
    g.addEdge(2, 3); 
    g.addEdge(3, 1); 
    cout << "Following is a Topological Sort of\n"; 
    g.degree(); 
    return 0; 
} 
