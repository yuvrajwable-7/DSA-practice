#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace std::chrono;

struct Edge {
    int u , v , w;
};

int main() {

    int V , E , src;

    cout << "Enter number of Vertex-> "<< endl;
    cin >> V;
    cout << "Enter number of Edges-> " << endl;
    cin>>E;

    vector<Edge> edges(E);

    cout << "Enter the (u , v , w) per line-> \n";
    for (int i = 0 ; i < E ; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w ;
    }

    cout << "Enter source vertex -> " << endl;
    cin >> src;

    // Initialize distances
    vector <long long> dist(V , LLONG_MAX);
    dist[src] = {0};

    // Measure execution time
    auto start = high_resolution_clock::now();

    // Relax Edges V - 1 times
    for (int i = 0 ; i < V - 1 ; i++) {
        for (auto &edge: edges) {
            if (dist[edge.u] + edge.w < dist[edge.v]) {
                dist[edge.v] = dist[edge.u] + edge.w;
            }
        }
    }
 

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Shortest distance from the source vertex : " << src << endl;
    for (int i = 0 ; i < V ; i++) {
        cout << "Vertex: " << i << " : ";
        if (dist[i] == LLONG_MAX) {
            cout << "INF\n";
        } else {
            cout << dist[i] << "\n";
        }
    }

    cout << "Measured Execution Time: " << duration.count() << " microseconds\n";
    cout << "Theoretical Time Complexity: O(V * E) = O(" << V << " * " << E << ")\n";

    return 0;
}