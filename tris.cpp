#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int colonna;
    int riga;
    int player=1;
    int turno=0;
    char matrice [3][3]={{'-','-','-'},{'-','-','-'},{'-','-','-'}};
     for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrice[i][j];
            if (j < 2){
                cout << "  ";
            }
        }
        cout << endl;
        if (i < 2){
            cout <<""<< endl;
        }
    }
    
    while(turno<9) {
        for(turno;turno<9;turno++){
            cout<<"il turno del player è ";
            cout<<player<<endl;
            cout<<"il numero riga è ";
            cin>>riga;
            cout<<"il numero colonna è ";
            cin>>colonna;
            if(player==1){
                matrice[riga-1][colonna-1]={'1'}; 
            }
            if(player==2){
                matrice[riga-1][colonna-1]={'2'}; 
            }
            
            
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    cout << matrice[i][j];
                    if (j < 2) {
                        cout << "  ";
                    }
                }
                cout << endl;
                if (i < 2) {
                    cout <<""<< endl;
                }
            }
            if(player==1){
                player=2;
            }
            else{
                player=1;
            }
        }
    }
}

