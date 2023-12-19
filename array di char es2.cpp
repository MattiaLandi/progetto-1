#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string inputString;
    char carattere;
    
    cout<<"inserisci una stringa"<<endl;
   cin>>inputString;

    
    cout << "Inserisci un carattere: ";
    cin >> carattere;

    
    int contatore = 0;
    for (char c : inputString) {
        if (c == carattere) {
            contatore++;
        }
    }

    
    cout << "Il carattere '" << carattere << "' compare nella stringa " << contatore << " volte." << std::endl;

    return 0;
}
