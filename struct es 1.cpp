#include <iostream>
#include <string>

using namespace std;


struct Libro {
    int codiceNumerico;
    int numeroPagine;
    float costo;
};

int main() {
    
    Libro libro1, libro2, libro3;

    
    cout << "Inserisci il codice numerico del primo libro: ";
    cin >> libro1.codiceNumerico;
    cout << "Inserisci il numero di pagine del primo libro: ";
    cin >> libro1.numeroPagine;
    cout << "Inserisci il costo del primo libro: ";
    cin >> libro1.costo;

   
    cout << "Inserisci il codice numerico del secondo libro: ";
    cin >> libro2.codiceNumerico;
    cout << "Inserisci il numero di pagine del secondo libro: ";
    cin >> libro2.numeroPagine;
    cout << "Inserisci il costo del secondo libro: ";
    cin >> libro2.costo;

    cout << "Inserisci il codice numerico del terzo libro: ";
    cin >> libro3.codiceNumerico;
    cout << "Inserisci il numero di pagine del terzo libro: ";
    cin >> libro3.numeroPagine;
    cout << "Inserisci il costo del terzo libro: ";
    cin >> libro3.costo;

    
    float costoMedio = (libro1.costo + libro2.costo + libro3.costo) / 3;

   
    cout << "Il costo medio dei libri è: " << costoMedio << " euro" << endl;

    
    Libro libroPiuCostoso;
    if (libro1.costo >= libro2.costo && libro1.costo >= libro3.costo) {
        libroPiuCostoso = libro1;
    } else if (libro2.costo >= libro1.costo && libro2.costo >= libro3.costo) {
        libroPiuCostoso = libro2;
    } else {
        libroPiuCostoso = libro3;
    }

    cout << "Dati del libro più costoso:";
    cout << "Codice numerico: " << libroPiuCostoso.codiceNumerico << endl;
    cout << "Numero di pagine: " << libroPiuCostoso.numeroPagine << endl;
    cout << "Costo: " << libroPiuCostoso.costo << " euro" << endl;

    return 0;
}

