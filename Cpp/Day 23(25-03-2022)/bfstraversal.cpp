
#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Graph{
	int numVertices;
	list<int>* adjLists;
	bool* visited;
	public:
	Graph(int vertices);
	void addEdge(int src,int dest);
	void BFS(int startVertex);
};	//End Class

//Create a graph with given vertices and maintain an adjacency list

Graph::Graph(int vertices){
	numVertices = vertices;
	adjLists = new list<int>[vertices];
	}
	//Add edged to the graph
	void Graph::addEdge(int src,int dest){
		adjLists[src].push_back(dest);
		adjLists[dest].push_back(src);
	}
	
//BFS Algorithm
void graph::BFS(int startVertex){
	visited = new bool[numVertices];
	for(int i=0;i < numVertices; i++)
	visited[i]=false;
	list<int> queue;
	visited[startVertex]=true;
	queue.push_back(startVertex);
	list<int>::iterator i;
	while(!queue.empty()){
		int currVertex=queue.front();
		cout<<"Visited" << currVertex << " ";
		queue.pop_front();
		for(o = adjLists[currVertex].begin();
		i!-adjLists[currVertex].end();
		++i){
			int adjVertex = *i;
			if(!visited[adjVertex]) {
				visited[adjVertx] =true;
				queue.push_back(adjVertex);
			}//if
		}//for
		
	}//While
}//BFS

