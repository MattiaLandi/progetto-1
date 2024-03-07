using namespace std;
#define N 10

int main() {
   
    int array[N];
    float somma = 0;
    int max, min=1000;

   
    cout << "Inserisci 10 numeri: " << endl;
    for (int i = 0; i < N; i++) {
        cout << "numero " << i + 1 << ": ";
        cin >> array[i];
        somma += array[i];
        if ( array[i] > max) {
            max = array[i];
        }
        if ( array[i] < min) {
            min = array[i];
        }
        }

    
    float media = somma/N;

    
    cout << "La somma di tutti gli elementi dell'array: " << somma << endl;
    cout << "La media di tutti gli elementi dell'array: " << media << endl;
    cout << "L'elemento massimo dell'array: " << max << endl;
    cout << "L'elemento minimo dell'array: " << min << endl;

    return 0;
}
