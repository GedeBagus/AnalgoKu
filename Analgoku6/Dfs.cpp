/*
	Nama	    : Gede Bagus Darmagita
	Kelas	    : B
	NPM 	    : 140810180068
*/

#include <iostream>
#include <list>

using namespace std;

class Graph
{
    int N;

    list<int> *adj;

    void DFSUtil(int u, bool visited[])
    {
        visited[u] = true;
        cout << u << " ";

        list<int>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); i++)
        {
            if (!visited[*i])
            {
                DFSUtil(*i, visited);
            }
        }
    }

public:
    Graph(int N)
    {
        this->N = N;
        adj = new list<int>[N];
    }

    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
    }

    void DFS(int u)
    {
        bool *visited = new bool[N];
        for (int i = 0; i < N; i++)
        {
            visited[i] = false;
        }
        DFSUtil(u, visited);
    }
};

int main()
{
    Graph Z(8);

    Z.addEdge(1, 2);
    Z.addEdge(1, 3);
    Z.addEdge(2, 3);
    Z.addEdge(2, 4);
    Z.addEdge(2, 5);
    Z.addEdge(3, 7);
    Z.addEdge(3, 8);
    Z.addEdge(4, 5);
    Z.addEdge(5, 3);
    Z.addEdge(5, 6);
    Z.addEdge(7, 8);

    cout << "\nDFS Traversal Starts from Node 1" << endl;
    Z.DFS(1);

    return 0;
}