#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // Lecture du nombre de tests

    vector<string> result;  // Stocker les résultats des tests

    for (int i = 0; i < t; i++) {
        int N1, N2;
        cin >> N1 >> N2;  // Lecture des deux entiers N1 et N2

        if (N1 == N2) {
            result.push_back("Square");
        } else {
            result.push_back("Rectangle");
        }
    }

    // Affiche les résultats ligne par ligne
    for (const string& res : result) {
        cout << res << endl;
    }

    return 0;
}
