#include <iostream>
#include <cstdlib>  // Include cstdlib for srand() and rand()
#include <ctime>    // Include ctime for time()
using namespace std;

#define N 5

void calcoloSomma(int array[], int &somma) {
    for (int i = 0; i < N; i++) {
        somma += array[i];
    }
}

void calcoloProdotto(int array[], int &prodotto) {
    for (int i = 0; i < N; i++) {
        prodotto *= array[i];
    }
}

void calcoloMedia(int somma, float &media) {
    media = somma / N;
}

int main() {
    int num;
    int array[N];
    int somma = 0;
    int prodotto = 1;
    float media = 0;
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        num = rand() % 99 + 1;
        array[i] = num;
        cout << num << endl;
    }

    calcoloSomma(array, somma);
    calcoloProdotto(array, prodotto);
    calcoloMedia(somma, media);

    cout << "La somma è " << somma << endl;
    cout << "La media è " << media << endl;
    cout << "Il prodotto è " << prodotto << endl;

    return 0;
}
