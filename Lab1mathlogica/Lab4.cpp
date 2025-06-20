//#include <iostream>
//#include <vector>
//#include <iomanip>
//#include <climits>
//#include <algorithm>
//
//using namespace std;
//
//void inputElements(vector<char>& vec, int size) {
//    vec.resize(size);
//    cout << "Введите " << size << " вершины графа: ";
//    for (int i = 0; i < size; i++) {
//        cin >> vec[i];
//    }
//}
//
//void inputMatrix(vector<vector<int>>& matrix, int size) {
//    matrix.resize(size, vector<int>(size));
//    cout << "Введите матрицу смежности (" << size << "x" << size << ").\n";
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            char val;
//            cin >> val;
//            matrix[i][j] = (val == '0') ? 0 : val - '0';
//        }
//    }
//}
//
//void printMatrix(const vector<vector<int>>& matrix, const vector<char>& vertices) {
//    cout << "  |";
//    for (char v : vertices) cout << setw(3) << v;
//    cout << "\n--+";
//    for (size_t i = 0; i < vertices.size(); i++) cout << "---";
//    cout << endl;
//
//    for (size_t i = 0; i < matrix.size(); i++) {
//        cout << vertices[i] << " |";
//        for (int val : matrix[i]) {
//            cout << setw(3) << val;
//        }
//        cout << endl;
//    }
//}
//
//vector<char> Dijkstra(const vector<vector<int>>& graph, const vector<char>& vertices, char start, char end, int& totalCost) {
//    int n = graph.size();
//    int start_idx = find(vertices.begin(), vertices.end(), start) - vertices.begin();
//    int end_idx = find(vertices.begin(), vertices.end(), end) - vertices.begin();
//
//    vector<int> dist(n, INT_MAX);
//    vector<int> prev(n, -1);
//    vector<bool> visited(n, false);
//
//    dist[start_idx] = 0;
//
//    for (int i = 0; i < n - 1; i++) {
//        int u = -1;
//        for (int j = 0; j < n; j++) {
//            if (!visited[j] && (u == -1 || dist[j] < dist[u])) {
//                u = j;
//            }
//        }
//
//        if (dist[u] == INT_MAX) break;
//
//        visited[u] = true;
//
//        for (int v = 0; v < n; v++) {
//            if (graph[u][v] > 0 && !visited[v] && dist[u] + graph[u][v] < dist[v]) {
//                dist[v] = dist[u] + graph[u][v];
//                prev[v] = u;
//            }
//        }
//    }
//
//    vector<char> path;
//    if (dist[end_idx] == INT_MAX) {
//        totalCost = -1;
//        return path;
//    }
//
//    totalCost = dist[end_idx];
//    for (int at = end_idx; at != -1; at = prev[at]) {
//        path.push_back(vertices[at]);
//    }
//    reverse(path.begin(), path.end());
//
//    return path;
//}
//
//int main() {
//    setlocale(LC_ALL, "RU");
//
//    int size;
//    cout << "Введите количество вершин: ";
//    cin >> size;
//
//    vector<char> vertices;
//    inputElements(vertices, size);
//
//    vector<vector<int>> adjacencyMatrix;
//    inputMatrix(adjacencyMatrix, size);
//
//    cout << "\nМатрица смежности графа:\n";
//    printMatrix(adjacencyMatrix, vertices);
//
//    char start, end;
//    cout << "\nВведите начальную вершину: ";
//    cin >> start;
//    cout << "Введите конечную вершину: ";
//    cin >> end;
//
//    int totalCost;
//    vector<char> path = Dijkstra(adjacencyMatrix, vertices, start, end, totalCost);
//
//    if (path.empty()) {
//        cout << "Путь между вершинами " << start << " и " << end << " не существует.\n";
//    }
//    else {
//        cout << "Кратчайший путь: ";
//        for (size_t i = 0; i < path.size(); i++) {
//            if (i != 0) cout << " ";
//            cout << path[i];
//        }
//        cout << "\nСуммарная стоимость пути: " << totalCost << endl;
//    }
//
//    return 0;
//}