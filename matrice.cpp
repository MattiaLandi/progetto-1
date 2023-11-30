#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;

#define  N 5

int main() {
    
    srand(time(NULL));

    
    int sequenza[N][N];

    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            sequenza[i][j] = rand() % 30 + 1;
        }
    }

    
    cout << "Matrice generata:" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << sequenza[i][j] << '\t';
        }
        cout << endl;
    }

    
    int sommaDiagonale = 0;
    int prodottoDiagonale = 1;

    for (int i = 0; i < N; ++i) {
        sommaDiagonale += sequenza[i][i];
        prodottoDiagonale *= sequenza[i][i];
    }

    
    cout << "Somma della diagonale principale: " << sommaDiagonale << endl;
    cout << "Prodotto della diagonale principale: " << prodottoDiagonale << endl;

    return 0;

