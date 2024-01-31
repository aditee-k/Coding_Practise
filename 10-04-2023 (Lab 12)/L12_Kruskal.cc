//Implement Kruskal algorithm for MST
#include<bits/stdc++.h>
using namespace std;

#define MAXN 100005

struct Edge 
{
    int u, v, w;
};

int parent[MAXN];
vector<Edge> edges;

int find(int x) 
{
    if (parent[x] == x) {
        return x;
    }
    return parent[x] = find(parent[x]);
}

void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (x != y) {
        parent[x] = y;
    }
}

bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}

int main() {
    int n, m;
    cout<<"Enter number of vertices and edges(+1):\n";
    cin >> n >> m;//n=number of vertices., m=number of edges.
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
    }
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cout<<"Enter both the edges and its weight.\n";
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }
    sort(edges.begin(), edges.end(), cmp);
    int ans = 0;
    for (Edge e : edges) {
        if (find(e.u) != find(e.v)) {
            unite(e.u, e.v);
            ans += e.w;
        }
    }
    cout <<"Min. spanning tree weight: "<<ans << endl;
    return 0;
}
