#include<bits/stdc++.h> 
using namespace std; 
  
class Graph 
{ 
    int V;   
    list<int> *adj; 
    int tc[4][4];
    void DFSUtil(int u, int v); 
public: 
    Graph(int V); 
    void addEdge(int v, int w) { adj[v].push_back(w); }  
    void transitiveClosure(); 
}; 
  
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V];  
  for(int i=0;i<4;i++)
  {
  for(int j=0;j<4;j++)
  { 
    tc[i][j]=0;
  }
  }
}  
void Graph::DFSUtil(int s, int v) 
{                                                                      //transitive closure of a graph.
    tc[s][v] = true;  
    list<int>::iterator i; 
    for (i = adj[v].begin(); i != adj[v].end(); ++i) 
        if (tc[s][*i] == false) 
            DFSUtil(s, *i); 
}  
void Graph::transitiveClosure() 
{  
    for (int i = 0; i < V; i++) 
        DFSUtil(i, i); 
  
    for (int i=0; i<V; i++) 
    { 
        for (int j=0; j<V; j++) 
            cout << tc[i][j] << " "; 
        cout << endl; 
    } 
}   
int main() 
{  
    Graph g(4); 
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 
  
    cout << "Transitive closure matrix is \n"; 
    g.transitiveClosure(); 
  
    return 0; 
} 
