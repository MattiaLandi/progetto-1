#include <iostream>
#include <cstring>
using namespace std;

int contaVocali( char* str) {
    int contatore = 0;
    int lunghezza ;

    for (int i = 0; i < lunghezza; ++i) {
       
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            contatore++;
        }
    }

    return contatore;
}

int main() {
    const int lunghezzaMassima = 100;
    char input[lunghezzaMassima];

    
   cout << "Inserisci una stringa: ";
   cin>>input ;

    
    int numeroVocali = contaVocali(input);
   cout << "Il numero di vocali nella stringa inserita e': " << numeroVocali << std::endl;

    return 0;
}
