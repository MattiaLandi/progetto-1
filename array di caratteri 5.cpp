#include <iostream>
#include <cstdlib>

bool verificaCaratteriUnici(const string& str) {
 char caratteriVisti;

    for (char carattere : str) {
        if (caratteriVisti.find(carattere) != caratteriVisti.end()) {
            return false;
        }
        caratteriVisti.insert(carattere);
    }

    return 0;
}

int main() {
    string inputUtente;
    cout << "Inserisci una stringa: ";
    cin >> inputUtente;

    if (verificaCaratteriUnici(inputUtente)) {
        cout << "La stringa non contiene caratteri ripetuti." << std::endl;
    } else {
        cout << "La stringa contiene caratteri ripetuti." << std::endl;
    }

    return 0;
}
