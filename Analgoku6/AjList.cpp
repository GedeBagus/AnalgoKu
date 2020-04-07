/*
	Nama	    : Gede Bagus Darmagita
	Kelas	    : B
	NPM 	    : 140810180068
*/

#include <iostream>
#include <cstdlib>
using namespace std;

struct AdjListNode
{
    int dest;
    struct AdjListNode *next;
};

struct AdjList
{
    struct AdjListNode *head;
};

class Graph
{
private:
    int V;
    struct AdjList *array;

public:
    Graph(int V)
    {
        this->V = V;
        array = new AdjList[V];
        for (int i = 1; i <= V; ++i)
            array[i].head = NULL;
    }

    AdjListNode *newAdjListNode(int dest)
    {
        AdjListNode *newNode = new AdjListNode;
        newNode->dest = dest;
        newNode->next = NULL;
        return newNode;
    }

    void addEdge(int src, int dest)
    {
        AdjListNode *newNode = newAdjListNode(dest);
        newNode->next = array[src].head;
        array[src].head = newNode;
        newNode = newAdjListNode(src);
        newNode->next = array[dest].head;
        array[dest].head = newNode;
    }

    void printGraph()
    {
        int v;
        for (v = 1; v <= V; ++v)
        {
            AdjListNode *pCrawl = array[v].head;
            cout << "\n Adjacency list of vertex " << v << "\n head ";
            while (pCrawl)
            {
                cout << "-> " << pCrawl->dest;
                pCrawl = pCrawl->next;
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph Z(8);
    Z.addEdge(7, 8);
    Z.addEdge(5, 6);
    Z.addEdge(3, 8);
    Z.addEdge(3, 7);
    Z.addEdge(4, 5);
    Z.addEdge(5, 3);
    Z.addEdge(2, 5);
    Z.addEdge(2, 4);
    Z.addEdge(2, 3);
    Z.addEdge(1, 3);
    Z.addEdge(1, 2);

    Z.printGraph();
}