#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define N 5

int main() {
   
    srand(time(NULL));

     int righ = 5;
     int col = 5;
    int matrice[N][N];
    int cont = 0;

    
    for (int i = 0; i < righ; ++i) {
        for (int j = 0; j < col; ++j) {
            int numeroCasuale;
            do {
                numeroCasuale = rand() % 32 - 10;  
                cont++;
            } while (numeroCasuale < 0);

            matrice[i][j] = numeroCasuale;
        }
    }

    cout << "Matrice generata:" << endl;
    for (int i = 0; i < righ; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << matrice[i][j] << '\t';
        }
        cout << endl;
    }

    
    int massimo = matrice[0][2];
    for (int i = 1; i < righ; ++i) {
        if (matrice[i][2] > massimo) {
            massimo = matrice[i][2];
        }
    }

    cout << "Massimo : " << massimo << endl;

    
    int NumeriInferiori = 0;
    for (int i = 0; i < righ; ++i) {
        for (int j = 0; j < col; ++j) {
            if (matrice[i][j] < 6) {
                NumeriInferiori++;
            }
        }
    }

   
 cout << "Numeri inferiori a 6 : " << NumeriInferiori << endl;

    
    cout << "Numero generato: " << cont << endl;

    return 0;
}






