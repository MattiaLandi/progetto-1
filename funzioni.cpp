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

void scambio(int array[], int& appo){
    for(int i=0;i<N/2;i++){
        appo=array[i];
        array[i]=array[N-1-i];
        array[N-1-i]=appo;
        
        
    }
}

void Max(int array[],int& massimo){
    massimo=array[0];
    for (int i = 0; i < N; i++) {
        if(array[i]>massimo)
        massimo=array[i];
    }
    
}
int main() {
    int num;
    int array[N];
    int somma = 0;
    int prodotto = 1;
    float media = 0;
    int appo;
    int massimo=0;
    cout<<"array prima dello scambio"<<endl;
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        num = rand() % 99 + 1;
        array[i] = num;
        cout << num << endl;
    }

    calcoloSomma(array, somma);
    calcoloProdotto(array, prodotto);
    calcoloMedia(somma, media);
    scambio(array, appo);
     Max(array,massimo);
    cout<<"array dopo lo scambio"<<endl;
    for(int i=0;i<N;i++){
        cout<<array[i]<<endl;
    }

    cout << "La somma è " << somma << endl;
    cout << "La media è " << media << endl;
    cout << "Il prodotto è " << prodotto << endl;
    cout<<"il massimo è"<<massimo<<endl;
    

    return 0;
}
