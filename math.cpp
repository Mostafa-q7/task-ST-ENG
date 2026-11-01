#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    int numVertices;

    cout << "--- Graph Representation Converter (C++) ---" << endl;
    cout << "Enter the number of vertices: ";
    cin >> numVertices;
    cin.ignore(); // Clear the buffer

    // Initialize an n x n Matrix with 0s
    vector<vector<int>> adjMatrix(numVertices, vector<int>(numVertices, 0));

    cout << "\nEnter connections for each vertex (e.g., for vertex 0, type '1 2' if it connects to 1 and 2):" << endl;

    for (int i = 0; i < numVertices; i++) {
        cout << "Neighbors of vertex " << i << ": ";
        string line;
        getline(cin, line);
        
        stringstream ss(line);
        int neighbor;
        while (ss >> neighbor) {
            if (neighbor < numVertices) {
                // Set matrix entry to 1 to represent an edge 
                adjMatrix[i][neighbor] = 1; 
            }
        }
    }

    // Output: The Adjacency Matrix 
    cout << "\n--- Output: Adjacency Matrix ---" << endl;
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}