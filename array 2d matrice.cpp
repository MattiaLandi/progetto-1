#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
     int righe = 10;
     int colonne = 10;

   
    srand(time(0));

   
    int matrice[righe][colonne];

    
    for (int i = 0; i < righe - 1; ++i) {
        for (int j = 0; j < colonne - 1; ++j) {
            matrice[i][j] = rand() % 10 + 1;
        }
    }

    
    for (int i = 0; i < righe - 1; ++i) {
        matrice[i][colonne - 1] = 0;
    }

    for (int j = 0; j < colonne; ++j) {
        matrice[j][righe-1] = 0;
    }

    
    for (int i = 0; i < righe; ++i) {
        for (int j = 0; j < colonne; ++j) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
