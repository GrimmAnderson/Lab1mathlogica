#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;


void inputElements(vector<char>& vec, int size) {
    vec.resize(size);
    cout << "Введите " << size << " элементов графа (вершин): ";
    for (int i = 0; i < size; i++) {
        cin >> vec[i];
    }
}

void inputAdjacencyMatrix(vector<vector<int>>& matrix, int size) {
    matrix.resize(size, vector<int>(size));
    cout << "Введите смежности матрицу  (" << size << "x" << size << ").\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            char val;
            cin >> val;
            if (val == '1') {
                matrix[i][j] = 1;
            }
            else {
                matrix[i][j] = 0;
            }
        }
    }
}

void printMatrix(const vector<vector<int>>& matrix, const vector<char>& vertices) {
    cout << "  |";
    for (char v : vertices) cout << setw(3) << v;
    cout << "\n--+";
    for (size_t i = 0; i < vertices.size(); i++) cout << "---";
    cout << endl;

    for (size_t i = 0; i < matrix.size(); i++) {
        cout << vertices[i] << " |";
        for (int val : matrix[i]) {
            cout << setw(3) << val;
        }
        cout << endl;
    }
}

vector<vector<int>> warshall(vector<vector<int>> adjacencyMatrix) {
    int n = adjacencyMatrix.size();
    vector<vector<int>> reachabilityMatrix = adjacencyMatrix;

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                reachabilityMatrix[i][j] = reachabilityMatrix[i][j] || (reachabilityMatrix[i][k] && reachabilityMatrix[k][j]);
            }
        }
    }

    return reachabilityMatrix;
}

int main() {
    setlocale(LC_ALL, "RU");

    int size;
    cout << "Введите количество вершин: ";
    cin >> size;

    vector<char> vertices;
    inputElements(vertices, size);

    vector<vector<int>> adjacencyMatrix;
    inputAdjacencyMatrix(adjacencyMatrix, size);

    cout << "\nМатрица смежности графа:\n";
    printMatrix(adjacencyMatrix, vertices);

    vector<vector<int>> reachabilityMatrix = warshall(adjacencyMatrix);

    cout << "\nМатрица достижимости:\n";
    printMatrix(reachabilityMatrix, vertices);

    return 0;
}