/*
	Nama	    : Gede Bagus Darmagita
	Kelas	    : B
	NPM 	    : 140810180068
*/

#include <iostream>
using namespace std;

int vertArr[20][20];
int count = 0;

void displayMatrix(int v);
void add_edge(int u, int v);

main(int argc, char *argv[])
{
    int v = 8;
    add_edge(1, 2);
    add_edge(1, 3);
    add_edge(2, 4);
    add_edge(2, 5);
    add_edge(3, 2);
    add_edge(3, 8);
    add_edge(4, 5);
    add_edge(5, 6);
    add_edge(7, 3);
    add_edge(8, 7);
    displayMatrix(v);
}

void displayMatrix(int v)
{
    int i, j;
    for (i = 0; i < v; i++)
    {
        for (j = 0; j < v; j++)
        {
            cout << vertArr[i][j] << " ";
        }
        cout << endl;
    }
}

void add_edge(int u, int v)
{
    vertArr[u][v] = 1;
    vertArr[v][u] = 1;
}