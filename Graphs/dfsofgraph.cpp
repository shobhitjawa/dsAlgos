#include<bits/stdc++.h> 
using namespace std;  
class Graph 
{ 
    int V;      
    list<int> *adj;      
public: 
    Graph(int V);    
    void addEdge(int v, int w);  
    void DFS(int s);  
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
void Graph::DFS(int s) 
{  
   vector<bool> visited;
    for(int i=0;i<V;i++)
    { 
    visited.push_back(false);
	}
    stack<int> stack;   
    stack.push(s); 
                                                      //Iterative Depth First Traversal of Graph
    while (stack.empty()==false) 
    {   
        s = stack.top(); 
        stack.pop();  
        if (visited[s]==false) 
        { 
            cout << s << " "; 
            visited[s] = true; 
        }
		list<int>::iterator i;   
        // for (i = adj[s].begin(); i != adj[s].end(); ++i) 
      //   {
        //   cout<<*i;	
         //  break;
	//	 } 
        for (i = adj[s].begin(); i != adj[s].end(); ++i) 
            if (visited[*i]==false) 
                stack.push(*i); 
    } 
}  
int main() 
{ 
    Graph g(5); 
    g.addEdge(1, 0); 
    g.addEdge(0, 2); 
    g.addEdge(2, 1); 
    g.addEdge(0, 3); 
    g.addEdge(1, 4); 
  
    cout << "Following is Depth First Traversal\n"; 
    g.DFS(0); 
  
    return 0; 
} 

