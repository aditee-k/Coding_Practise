//Depth First Search (DFS)
#include <iostream>
#include <stack>

using namespace std;

const int MAX = 10000; // maximum number of vertices
int adjList[MAX][MAX]; // adjacency list representation of graph
bool visited[MAX]; // mark visited vertices

void dfs(int start, int n) 
{
    stack<int> s;

    s.push(start);
    visited[start] = true;

    while (!s.empty()) {
        int curr = s.top();
        s.pop();
        cout << curr << " ";

        for (int i = n-1; i >= 0; i--) 
        {
            if (adjList[curr][i] == 1 && !visited[i]) 
            {
                s.push(i);
                visited[i] = true;
            }
        }
    }
}

int main() 
{
    int n, m; // n = number of vertices, m = number of edges
    cin >> n >> m;

    for (int i = 0; i < m; i++) 
    {
        int u, v; // edge between u and v
        cin >> u >> v;

        adjList[u][v] = 1;
        adjList[v][u] = 1;
    }

    int start; // starting vertex for DFS
    cin >> start;

    dfs(start, n);

    return 0;
}
