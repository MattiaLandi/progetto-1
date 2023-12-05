#include <iostream>
#include <cstdlib>  
#include <ctime>
using namespace std;


int NumeroCas() {
    return rand() % 13 - 5;  
}


void MediaSomma( int array[], int lunghezza, double &media, int &somma) {
    somma = 0;
    for (int i = 0; i < lunghezza; ++i) {
        somma += array[i];
    }
    media =somma / lunghezza;
}


int Max(int array[], int lunghezza) {
    int Max = array[0];
    for (int i = 1; i < lunghezza; ++i) {
        if (array[i] > Max) {
            Max = array[i];
        }
    }
    return Max;
}

int main() {
    const int lunghezzaArray = 10;
    int arrayNumeri[lunghezzaArray];
    
    srand(time(NULL));

   
    for (int i = 0; i < lunghezzaArray; ++i) {
        arrayNumeri[i] = NumeroCas();
    }


    double media;
    int somma;
    MediaSomma(arrayNumeri, lunghezzaArray, media, somma);
    cout << "Media: " << media <<endl;
   cout << "Somma: " << somma <<endl;

    
    int massimo = Max(arrayNumeri, lunghezzaArray);
    cout << "Massimo: " << massimo <<endl;

    return 0;
}
