#include <bits/stdc++.h> 
using namespace std;  
void printLevels(vector<int> graph[], int V, int x) 
{  
  int level[V];
  bool visited[V];
  queue<int> q1;
  q1.push(x);
  level[x]=0;
  visited[x]=false;
  while(q1.empty()==false)
  {
  	x=q1.front();
  	q1.pop();
  	for(int i=0;i<graph[x].size();i++)
    {
    	int b=graph[x][i];
    	if(visited[b]==false)
    	{
    		q1.push(b);                                       //Level of Each node in a Tree from source node (using BFS)
    		level[b]=level[x]+1;
    		visited[b]=true;
		}
	}
  }
    cout << "Nodes"
         << "    "
         << "Level" << endl; 
    for (int i = 0; i < V; i++) 
        cout << " " << i << "   -->   " << level[i] << endl; 
}    
int main() 
{  
    int V = 8; 
    vector<int> graph[V]; 
  
    graph[0].push_back(1); 
    graph[0].push_back(2); 
    graph[1].push_back(3); 
    graph[1].push_back(4); 
    graph[1].push_back(5); 
    graph[2].push_back(5); 
    graph[2].push_back(6); 
    graph[6].push_back(7);  
    printLevels(graph, V, 0); 
  
    return 0; 
} 
