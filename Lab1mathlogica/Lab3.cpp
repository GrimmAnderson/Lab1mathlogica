//#include <iostream>
//#include <vector>
//#include <iomanip>
//#include <locale>
//
//using namespace std;
//
//void print(const vector<char>& vec) {
//    cout << "{ ";
//    for (char element : vec) {
//        cout << element << " ";
//    }
//    cout << "}" << endl;
//}
//
//void inputElements(vector<char>& vec, int size, const string& setName) {
//    vec.resize(size);
//    cout << "Введите " << size << " элементов множества " << setName << ": ";
//    for (int i = 0; i < size; i++) {
//        cin >> vec[i];
//    }
//}
//
//void inputMatrix(vector<vector<int>>& matrix, int n, int m) {
//    matrix.resize(n, vector<int>(m));
//    cout << "Введите матрицу  " << n << "x" << m << " (0 или 1):\n";
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> matrix[i][j];
//        }
//    }
//}
//
//bool isFunction(const vector<vector<int>>& matrix) {
//    for (const auto& row : matrix) {
//        int count = 0;
//        for (int val : row) {
//            if (val == 1) count++;
//        }
//        if (count > 1) return false;
//    }
//    return true;
//}
//
//void printRelationTable(const vector<vector<int>>& matrix,
//    const vector<char>& setX, const vector<char>& setY) {
//    cout << "  |";
//    for (char y : setY) cout << setw(3) << y;
//    cout << "\n--+";
//    for (size_t i = 0; i < setY.size(); ++i) cout << "---";
//    cout << endl;
//
//    for (size_t i = 0; i < setX.size(); ++i) {
//        cout << setX[i] << " |";
//        for (int val : matrix[i]) {
//            cout << setw(3) << val;
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    setlocale(LC_ALL, "RU");
//    int n, m;
//    vector<char> setX, setY;
//    vector<vector<int>> relationMatrix;
//
//    cout << "Введите размеры матрицы n x m:\n";
//    cout << "n (множество X): ";
//    cin >> n;
//    cout << "m (множество Y): ";
//    cin >> m;
//
//    inputElements(setX, n, "X");
//    inputElements(setY, m, "Y");
//
//    cout << "\nМножество X: ";
//    print(setX);
//    cout << "Множество Y: ";
//    print(setY);
//
//    inputMatrix(relationMatrix, n, m);
//
//    cout << "\nОтношение " << (isFunction(relationMatrix) ? "является" : "не является") << " функцией.\n";
//
//    cout << "\nМатрица отношения в виде таблицы:\n";
//    printRelationTable(relationMatrix, setX, setY);
//
//    return 0;
//}