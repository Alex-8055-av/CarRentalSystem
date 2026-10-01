#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int V = 5; // number of vertices
    int graph[5][5] = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };

    int key[V];       // minimum weight edge to connect
    bool mstSet[V];   // included in MST
    int parent[V];    // store MST edges

    for (int i = 0; i < V; i++) {
        key[i] = INT_MAX;
        mstSet[i] = false;
    }
    key[0] = 0;       // start from vertex 0
    parent[0] = -1;

    for (int count = 0; count < V - 1; count++) {
        // pick minimum key vertex not yet in MST
        int u = -1;
        for (int i = 0; i < V; i++)
            if (!mstSet[i] && (u == -1 || key[i] < key[u]))
                u = i;

        mstSet[u] = true;

        // update key values of adjacent vertices
        for (int v = 0; v < V; v++) {
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }

    cout << "Edges in MST:\n";
    int totalWeight = 0;
    for (int i = 1; i < V; i++) {
        cout << parent[i] << " - " << i << " : " << graph[i][parent[i]] << "\n";
        totalWeight += graph[i][parent[i]];
    }
    cout << "Total weight of MST = " << totalWeight << "\n";

    return 0;
}


