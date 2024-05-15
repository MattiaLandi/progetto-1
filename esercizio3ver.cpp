#include <iostream>
using namespace std;

int righe=6;
int colonne=5;


int numeroRandom(int min, int max){
        return min + rand()%(max-min+1);
}
void riempiArray(int array[], int dimensione, int min, int max){
    for(int i=0;1<dimensione;i++){
        array[i]=numeroRandom(min, max);
    }
}

void calcolo(int array[],int dimensione, int somma, int prodotto, float media){
somma=0;
 prodotto=1;
for(int i=0;i<dimensione;i++){
        somma+=array[i];
        prodotto*=array[i];
}

 media=somma/dimensione;
}
int ricercaMassimo(int array[], int dimensione){
        int max=array[0];
        for(int i=1;i<dimensione;i++){
            if (array[i]>max){
                max=array[i];
            }
        }
        return max;
}

void scambioArray(int array[],int dimensione){
    for(int i=0;i<dimensione/2;i++){
            int temp=array[i];
            array[i]=array[dimensione-1-i];
            array[dimensione-i-1]=temp;
    }
}
void stampaArray(int array[], int dimensione){
    for(int i=0;i<dimensione;i++){
        cout<<array[i];
        if (i<dimensione-1){
            cout<< ",";
        }
    }
}
/ Funzione per stampare una matrice
void stampaMatrice(int matrice[][COLONNE + 1 ], int righe, int colonne) {
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
}

// Funzione per aggiungere la sesta colonna di zeri alla matrice
void aggiungiSestaColonna(int matrice[][COLONNE + 1], int righe) {
    for (int i = 0; i < righe; i++) {
        matrice[i][COLONNE] = 0;
    }
}

// Funzione per sommare gli elementi di ogni colonna e trovare la colonna con la somma massima
int trovaColonnaMassima(int matrice[][COLONNE + 1], int righe, int colonne, int &somma) {
    int colonnaMassima = 0;
    somma = 0;

    for (int j = 0; j < colonne + 1; j++) {
        int sommaColonna = 0;
        for (int i = 0; i < righe; i++) {
            sommaColonna += matrice[i][j];
        }
        if (sommaColonna > somma) {
            somma = sommaColonna;
            colonnaMassima = j;
        }
    }

    return colonnaMassima;
}

// Funzione per determinare se un numero è pari o dispari
const char* parita(int numero) {
    return (numero % 2 == 0) ? "pari" : "dispari";
}

int main(){
    int DIMENSIONE=6;
    srand(time(NULL));
    int array[6];
    int somma;
    int prodotto;
    float media;
    riempiArray(array, dimensione, min, max);
    calcolo( array, dimensione,  somma,  prodotto,  media);
    cout<<"somma"<<somma<<endl;
    cout<<"prodotto"<<prodotto<<endl;
    cout<<"media"<<media<<endl;
    int max=ricercaMassimo(array,6);
    cout<<"il massimo è"<<max<<endl;
    cout<<"array prima dello scambio";
    stampaArray(array,6);
    scambioArray(array,6);
    cout<<"array dopo lo scambio";
    stampaArray(array,6);
}


