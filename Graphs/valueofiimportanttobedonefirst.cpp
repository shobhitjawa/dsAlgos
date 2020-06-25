#include<bits/stdc++.h> 
using namespace std;  
class Graph 
{ 
    int V;     
    list<int> *adj;      
public: 
    Graph(int V);    
    void addEdge(int v, int w);  
    void DFS();    
    
    void DFSUtil(int s, vector<bool> &visited); 
}; 
  
Graph::Graph(int V)                                          //*i value 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w);   
}   
void Graph::DFSUtil(int s, vector<bool> &visited) 
{  
    list<int> stack;  
    stack.push_front(s); 
  
    while (!stack.empty()) 
    {  
        s = stack.front(); 
        stack.pop_back();  
        if (!visited[s]) 
        {  
            visited[s] = true; 
        } 
     list<int>:: iterator i; 
        for (i = adj[s].begin(); i != adj[s].end(); ++i)               //so *i represents the value
            {
            	cout<<*i;
			}
			cout<<endl;
    } 
}  
void Graph::DFS() 
{  
    vector<bool> visited(V, false); 
  
    for (int i = 0; i < V; i++) 
        if (!visited[i]) 
            DFSUtil(i, visited); 
}  
int main() 
{ 
    Graph g(5); 
    g.addEdge(1, 0); 
    g.addEdge(1, 2);
    g.addEdge(2, 1); 
    g.addEdge(3, 4); 
    g.addEdge(4, 0);  
    cout << "Following is Depth First Traversal\n"; 
    g.DFS(); 
  
    return 0; 
} 
