//Breadth First Search (BFS)
#include <iostream>
#include <queue>

using namespace std;

const int MAX = 10000; // maximum number of vertices
int adjList[MAX][MAX]; // adjacency list representation of graph
bool visited[MAX]; // mark visited vertices

void bfs(int start, int n) 
{
    queue<int> q;

    q.push(start);
    visited[start] = true;

    while (!q.empty()) 
    {
        int curr = q.front();
        q.pop();
        cout << curr << " ";

        for (int i = 0; i < n; i++) 
        {
            if (adjList[curr][i] == 1 && !visited[i]) 
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main() 
{
    int n, m; // n = number of vertices, m = number of edges
    cout << "Enter number of vertices and edges: ";
    cin >> n >> m;

    for (int i = 0; i < m; i++) 
    {
        int u, v; // edge between u and v
        cin >> u >> v;

        adjList[u][v] = 1;
        adjList[v][u] = 1;
    }

    int start; // starting vertex for BFS
    cin >> start;

    bfs(start, n);

    return 0;
}
