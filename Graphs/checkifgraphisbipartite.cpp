#include <bits/stdc++.h> 
using namespace std; 
const int V = 4;  
bool isBipartiteUtil(int G[][V], int src, int colorArr[]) 
{ 
    colorArr[src] = 1;   
    queue <int> q; 
    q.push(src);  
    while (!q.empty()) 
    {  
        int u = q.front(); 
        q.pop();   
        if (G[u][u] == 1) 
        return false;  
        for (int v = 0; v < V; ++v) 
        {   
            if (G[u][v] && colorArr[v] == -1) 
            {   
                colorArr[v] = 1 - colorArr[u]; 
                q.push(v); 
            }  
            else if (G[u][v] && colorArr[v] == colorArr[u])            //Check whether a given graph is Bipartite or not
                return false; 
        }                                                         //the above algorithm works on both if the graph is connected or disconnected.
    }                                                              //time complexity-O(V^2) If graph is represented using adjacency list,
	                                                              // then the complexity becomes O(V+E).
    return true; 
}   
bool isBipartite(int G[][V]) 
{  
    int colorArr[V]; 
    for (int i = 0; i < V; ++i) 
        colorArr[i] = -1;   
    for (int i = 0; i < V; i++) 
    if (colorArr[i] == -1) 
        if (isBipartiteUtil(G, i, colorArr) == false) 
        return false; 
  
    return true; 
}  
int main() 
{ 
    int G[][V] = {{0, 1, 0, 1}, 
        {1, 0, 1, 0}, 
        {0, 1, 0, 1}, 
        {1, 0, 1, 0} 
    }; 
    isBipartite(G) ? cout << "Yes" : cout << "No"; 
    return 0; 
} 
