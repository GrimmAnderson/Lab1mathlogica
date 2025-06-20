    //#include <iostream>
    //#include <vector>
    //#include <limits>
    //using namespace std;

    //struct ijcc {
    //    char i;     
    //    char j;    
    //    char c1; 
    //    char c2;    
    //};
   
    //void unionmatrix(vector<ijcc>& newmatrix, vector<ijcc>& matrix1, vector<ijcc>& matrix2) {
    //    for (int i = 0; i < matrix1.size(); i++) {
    //        newmatrix.push_back(matrix1[i]);
    //    }
    //    for (int i = 0; i < matrix2.size(); i++) {
    //        newmatrix.push_back(matrix2[i]);
    //    }
    //}

    //void printmatrix(vector<ijcc>& matrix) {
    //    cout <<" { ";
    //    for (int i = 0; i < matrix.size(); i++) {
    //        cout << matrix[i].i << matrix[i].j << matrix[i].c1 << matrix[i].c2;
    //        if (i < matrix.size() - 1) {
    //            cout << " , ";
    //        }
    //    }
    //    cout << "}";
    //}

    //void intersectionmatrix(vector<ijcc>& intersection,vector<ijcc>& matrix1, vector<ijcc>& matrix2) {
    //    for (int i = 0; i < matrix1.size(); i++) {
    //        bool valued = false;
    //        for (int j = 0; j < matrix2.size(); j++) {
    //            if (matrix1[i].i == matrix2[j].i && matrix1[i].j == matrix2[j].j && matrix1[i].c1 == matrix2[j].c1 && matrix1[i].c2 == matrix2[j].c2) {
    //                valued = true;
    //                break;
    //            }
    //        }
    //        if (valued) {
    //            intersection.push_back(matrix1[i]);
    //        }
    //    }
    //}

    //void addition(vector<ijcc>& addition, vector<ijcc>& matrix1, vector<ijcc>& matrix2) {
    //    for (int i = 0; i < matrix1.size(); i++) {
    //        bool valued = false;
    //        for (int j = 0; j < matrix2.size(); j++) {
    //            if (matrix1[i].i == matrix2[j].i && matrix1[i].j == matrix2[j].j && matrix1[i].c1 == matrix2[j].c1 && matrix1[i].c2 == matrix2[j].c2) {
    //                valued = true;
    //                break;
    //            }
    //        }
    //        if (!valued) {
    //            addition.push_back(matrix1[i]);
    //        }
    //    }

    //}

    //void removingrepetitions(vector<ijcc>& matrix) {
    //    vector<ijcc> newmatrix;

    //    for (int i = 0; i < matrix.size(); i++) {
    //        bool valued = true;

    //        for (int j = 0; j < newmatrix.size(); j++) {
    //            if (matrix[i].i == newmatrix[j].i && matrix[i].j == newmatrix[j].j && matrix[i].c1 == newmatrix[j].c1 && matrix[i].c2 == newmatrix[j].c2) {
    //                valued = false;
    //                break;
    //            }
    //        }

    //        if (valued) {
    //            newmatrix.push_back(matrix[i]);
    //        }
    //    }

    //    matrix.clear();
    //    for (int i = 0; i < newmatrix.size(); i++) {
    //        matrix.push_back(newmatrix[i]);
    //    }
    //}

    //void matrixdifference(vector<ijcc>& difference, vector<ijcc>& matrix1, vector<ijcc>& matrix2) {
    //    for (int i = 0; i < matrix1.size(); i++) {
    //        bool valued = true;
    //        for (int j = 0; j < matrix2.size(); j++) {
    //            if (matrix1[i].i == matrix2[j].i && matrix1[i].j == matrix2[j].j && matrix1[i].c1 == matrix2[j].c1 && matrix1[i].c2 == matrix2[j].c2) {
    //                valued = false;
    //                break;
    //            }
    //        }
    //        if (valued) {
    //            difference.push_back(matrix1[i]);
    //        }
    //    }

    //    for (int i = 0; i < matrix2.size(); i++) {
    //        bool valued = true;
    //        for (int j = 0; j < matrix1.size(); j++) {
    //            if (matrix2[i].i == matrix1[j].i && matrix2[i].j == matrix1[j].j && matrix2[i].c1 == matrix1[j].c1 && matrix2[i].c2 == matrix1[j].c2) {
    //                valued = false;
    //                break;
    //            }
    //        }
    //        if (valued) {
    //            difference.push_back(matrix2[i]);
    //        }
    //    }


    //}

    //void inputmatrix(vector<ijcc> &matrix,int size) {
    //
    //    ijcc ijcc;

    //    for (int i = 0; i < size; i++){


    //    bool valid = false;
    //    while(!valid){
    //        ijcc.i = '\0';
    //        ijcc.j = '\0';
    //        ijcc.c1 = '\0';
    //        ijcc.c2 = '\0';

    //        cout << "ijcc " << i + 1 <<" : ";

    //        cin >> ijcc.i >> ijcc.j >> ijcc.c1 >> ijcc.c2;

    //             if ((ijcc.i - '0') % 2 == 0 && (ijcc.j - '0') % 2 != 0 && (ijcc.i >= '0' && ijcc.i <= '9') && (ijcc.j >= '0' && ijcc.j <= '9') && (ijcc.c1 >= '0' && ijcc.c1 <= '9') && (ijcc.c2 >= '0' && ijcc.c2 <= '9')) {
    //                 matrix.push_back(ijcc);
    //                 valid = true;
    //             } 
    //             else {
    //                cout << "ќшибка вы не правильно ввели символы массива.ѕовторите попытку." << endl;
    //                cin.clear();
    //                cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //             }
    //    }

    //    }

    //    }

    //int main() {
    //    setlocale(LC_ALL, "RU");
    //    vector<ijcc> matrix1, matrix2, matrix3,intersection, difference, additionAB, additionBA;
    //    int size1, size2;

    //    cout << "¬ведите размер первого множества : ";
    //    cin >> size1;
    //    cout << "¬ведите элементы ijcc первого множества : " << endl;
    //    inputmatrix(matrix1,size1);
    //    removingrepetitions(matrix1);

    //    cout << "¬ведите размер второго множества : ";
    //    cin >> size2;
    //    cout << "¬ведите элементы ijcc второго множества : " << endl;
    //    inputmatrix(matrix2,size2);
    //    removingrepetitions(matrix2);
    //
    //    unionmatrix(matrix3, matrix1, matrix2);

    //    removingrepetitions(matrix3);

    //    intersectionmatrix(intersection,matrix1, matrix2);
    //
    //    matrixdifference(difference,matrix1, matrix2);

    //    addition(additionAB,matrix1,matrix2);
    //    addition(additionBA, matrix2, matrix1);
    //

    //    cout << "\nЁлементы первого множества A = ";
    //    printmatrix(matrix1);
    //    cout << "\nЁлементы второго множества B = ";
    //    printmatrix(matrix2);
    //    cout << "\nЁлементы множества A U B = ";
    //    printmatrix(matrix3);
    //    cout << "\nЁлементы  пересечени€ A B = ";
    //    printmatrix(intersection);
    //    cout << "\nЁлементы симметрической разницы множества  A B = ";
    //    printmatrix(difference);
    //    cout << "\nЁлементы множества A\\B = ";
    //    printmatrix(additionAB);
    //    cout << "\nЁлементы множества B\\A = ";
    //    printmatrix(additionBA);



	   // return 0;
    //}
    //