#include <iostream>

using namespace std;

int Domino(int n) {
    
    if (n <= 1) return 1;
    
    return Domino(n - 1) + Domino(n - 2);
}

int main() {
    int n ;
    cout<<"inserisci n"<<endl;
    cin>>n;
    cout << "Il numero di disposizioni possibili per un rettangolo 2 × " << n << " è: " << Domino(n) << endl;
    
    return 0;
}
