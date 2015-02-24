#ifndef _GRAPH_H_
#define _GRAPH_H_

#include <vector>
#include <string>

struct Edge;

class Node
{
	typedef std::vector<Edge> EdgeList;
public:
	Node(int a_iNum);
	int NodeNumber;
	EdgeList g_nEdges;
};

struct Edge
{
	Node* g_nStart;
	Node* g_nEnd;
	float g_nCost;
};

class Graph
{
	typedef std::vector<Node*> NodeList;
public:
	Graph();
	~Graph();
	Graph(unsigned int a_uiNodeCount);
	void AddNode(Node* g_nNode);
	void RemoveNode(Node* g_nNode);
	void AddEdge(Node Start, Node End);
	NodeList g_nNodes;
};

#endif // _GRAPH_H_