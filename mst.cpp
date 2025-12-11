#include <iostream>
#include <vector>
#include <limits> // For std::numeric_limits

// A large number to represent infinity
const int INF = std::numeric_limits<int>::max();

void prims_algorithm(const std::vector<std::vector<int>>& graph) {
    int num_vertices = graph.size();

    // A vector to track which vertices are already in the MST.
    std::vector<bool> in_mst(num_vertices, false);
    
    // A vector to store the minimum weight to connect a vertex to the MST.
    std::vector<int> min_weight(num_vertices, INF);
    
    // The parent array will help us reconstruct the MST edges.
    std::vector<int> parent(num_vertices, -1); // -1 indicates no parent

    // Start with the first vertex (vertex 0).
    min_weight[0] = 0;
    
    int total_cost = 0;

    // The algorithm runs until all vertices are included.
    for (int count = 0; count < num_vertices; ++count) {
        // Find the vertex with the minimum weight that is not yet in the MST.
        int min_val = INF;
        int u = -1;
        for (int v_idx = 0; v_idx < num_vertices; ++v_idx) {
            if (!in_mst[v_idx] && min_weight[v_idx] < min_val) {
                min_val = min_weight[v_idx];
                u = v_idx;
            }
        }

        // If we couldn't find such a vertex, graph is disconnected.
        if (u == -1) break;

        // Add the chosen vertex 'u' to our MST.
        in_mst[u] = true;
        total_cost += min_val;

        // Update the min_weight for all adjacent vertices of 'u'.
        for (int v_adj = 0; v_adj < num_vertices; ++v_adj) {
            // If there's an edge from u to v_adj, v_adj is not in MST,
            // and the edge weight is smaller than the current min_weight...
            if (graph[u][v_adj] != 0 && !in_mst[v_adj] && graph[u][v_adj] < min_weight[v_adj]) {
                // ...update the min_weight and parent for v_adj.
                min_weight[v_adj] = graph[u][v_adj];
                parent[v_adj] = u;
            }
        }
    }
    
    std::cout << "Total cost of MST: " << total_cost << std::endl;
    std::cout << "Edges in the MST:" << std::endl;
    // Start from 1 because vertex 0 is the root with no parent.
    for (int i = 1; i < num_vertices; ++i) {
        std::cout << "  " << parent[i] << " -- " << i << "   (cost: " << graph[i][parent[i]] << ")" << std::endl;
    }
}

// --- Example Usage ---
int main() {
    // Adjacency matrix representation of the graph
    // 0 means no direct edge
    std::vector<std::vector<int>> example_graph = {
        {0, 2, 0, 6},
        {2, 0, 3, 8},
        {0, 3, 0, 5},
        {6, 8, 5, 0}
    };

    std::cout << "Finding MST for the example graph..." << std::endl;
    prims_algorithm(example_graph);

    return 0;
}