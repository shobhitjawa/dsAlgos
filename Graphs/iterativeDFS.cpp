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
Graph::Graph(int V) 
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
    stack.push_back(s); 
  
    while (!stack.empty()) 
    {                                                            //list pop_back() function in C++ STL
        s = stack.front(); 
        stack.pop_back();  
        if (!visited[s]) 
        { 
            cout << s << " "; 
            visited[s] = true; 
        }  
        list<int>::iterator i;
        for (i = adj[s].begin(); i != adj[s].end(); ++i) 
            if (!visited[*i]) 
                stack.push_back(*i); 
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
    g.addEdge(2, 1); 
    g.addEdge(3, 4); 
    g.addEdge(4, 0); 
    cout << "Following is Depth First Traversal\n"; 
    g.DFS(); 
    return 0; 
} 
