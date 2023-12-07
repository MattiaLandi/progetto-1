#include <iostream>
#define N 4
using namespace std;
struct LinguisticLevel {
    string level;
};
struct Classe {
    int anno; 
    string sezione; 
    
};
struct Studente 
{ int codice; 
Classe classe; 
LinguisticLevel livello; 
};
int main()
{ 
    Studente studenti[N];
for (int i = 0; i < N; i++) {
    cout << "Inserisci i dati dello studente " << i + 1 << endl;
    cout << "Codice: ";
    cin >> studenti[i].codice;
    cout << "Anno: ";
    cin >> studenti[i].classe.anno;
    cout << "Sezione: ";
    cin >> studenti[i].classe.sezione;
    cout << "Livello: ";
    cin >> studenti[i].livello.level;
    cout << endl;
}

for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
        if (studenti[i].classe.anno < studenti[j].classe.anno && studenti[i].livello.level > studenti[j].livello.level) {
            cout << "Lo studente di classe inferiore con livello linguistico superiore è:" << endl;
            cout << "Codice: " << studenti[i].codice << endl;
            cout << "Anno: " << studenti[i].classe.anno << endl;
            cout << "Sezione: " << studenti[i].classe.sezione << endl;
            cout << "Livello: " << studenti[i].livello.level << endl;
            cout << endl;
        }
    }
}

return 0;
}



