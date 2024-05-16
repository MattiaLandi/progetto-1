#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

#define X 5
#define Y 6

int main()
{
    int matrice[X][Y];
    
    // Inizializzazione della matrice
    for(int i = 0; i < X; i++) {
        for(int j = 0; j < Y; j++) {
            matrice[i][j] = (j + 2) % 2;
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "prima matrice" << endl;
    
    // Assegnamento del valore 2 alla sesta colonna di ogni riga della matrice
    for(int i = 0; i < X; i++) {
        matrice[i][Y - 1] = 2;
    }
    
    // Stampa della matrice dopo l'assegnamento
    for(int i = 0; i < X; i++) {
        for(int j = 0; j < Y; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
