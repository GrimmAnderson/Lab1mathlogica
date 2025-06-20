//#include <iostream>
//#include <vector>
//#include <set>
//#include <limits>
//using namespace std;
//
//struct Pair {
//    char first;
//    char second;
//};
//
//void printPairs(const vector<Pair>& pairs) {
//    cout << "{";
//    for (size_t i = 0; i < pairs.size(); ++i) {
//        cout << "(" << pairs[i].first << "," << pairs[i].second << ")";
//        if (i < pairs.size() - 1) cout << ", ";
//    }
//    cout << "}";
//}
//
//void inputPairs(vector<Pair>& pairs, int size) {
//    for (int i = 0; i < size; ) {
//        Pair p;
//        cout << "���� " << i + 1 << ": ";
//        cin >> p.first >> p.second;
//
//        if (cin.fail() || !isdigit(p.first) || !isdigit(p.second)) {
//            cout << "������: ������� ��� ����� .\n";
//            cin.clear();
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');
//        }
//        else {
//            pairs.push_back(p);
//            i++;
//        }
//    }
//}
//
//set<char> getElements(const vector<Pair>& pairs) {
//    set<char> elements;
//    for (const auto& p : pairs) {
//        elements.insert(p.first);
//        elements.insert(p.second);
//    }
//    return elements;
//}
//
//bool isReflexive(const vector<Pair>& pairs) {
//    auto elements = getElements(pairs);
//    for (char a : elements) {
//        bool found = false;
//        for (const auto& p : pairs) {
//            if (p.first == a && p.second == a) {
//                found = true;
//                break;
//            }
//        }
//        if (!found) return false;
//    }
//    return true;
//}
//
//bool isSymmetric(const vector<Pair>& pairs) {
//    for (const auto& p : pairs) {
//        bool found = false;
//        for (const auto& q : pairs) {
//            if (q.first == p.second && q.second == p.first) {
//                found = true;
//                break;
//            }
//        }
//        if (!found) return false;
//    }
//    return true;
//}
//
//bool isAntisymmetric(const vector<Pair>& pairs) {
//    for (const auto& p : pairs) {
//        if (p.first == p.second) continue;
//        for (const auto& q : pairs) {
//            if (q.first == p.second && q.second == p.first) {
//                return false;
//            }
//        }
//    }
//    return true;
//}
//
//bool isTransitive(const vector<Pair>& pairs) {
//    for (const auto& a : pairs) {
//        for (const auto& b : pairs) {
//            if (a.second == b.first) {
//                bool found = false;
//                for (const auto& c : pairs) {
//                    if (c.first == a.first && c.second == b.second) {
//                        found = true;
//                        break;
//                    }
//                }
//                if (!found) return false;
//            }
//        }
//    }
//    return true;
//}
//
//int main() {
//    setlocale(LC_ALL, "RU");
//    vector<Pair> pairs;
//    int size;
//
//    cout << "������� ���������� ��� ���������: ";
//    cin >> size;
//
//    cout << "������� �������� ��� (��� ����� ����� ������):\n";
//    inputPairs(pairs, size);
//
//    cout << "\n��������� ����: ";
//    printPairs(pairs);
//    cout << "\n";
//
//    cout << "\n�������� ���������:\n";
//    cout << "��������������: " << (isReflexive(pairs) ? "��" : "���") << "\n";
//    cout << "��������������: " << (isSymmetric(pairs) ? "��" : "���") << "\n";
//    cout << "������������������: " << (isAntisymmetric(pairs) ? "��" : "���") << "\n";
//    cout << "��������������: " << (isTransitive(pairs) ? "��" : "���") << "\n";
//
//    return 0;
//}