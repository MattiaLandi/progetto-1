#include <iostream>
#include  <string>

using namespace std;
string nome;
string cognome;
string conN;
string conC;

void calcolaNome(){
    for(char carattere : nome){
        if(carattere!='a'&&carattere!='e'&&carattere!='i'&&carattere!='o'&&carattere!='u'){
            if(conN.length()<3){
                conN+=carattere;
            }
        }
    }
}

void calcolaCognome(){
    for(char carattere : cognome){
        if(carattere!='a'&&carattere!='e'&&carattere!='i'&&carattere!='o'&&carattere!='u'){
            if(conC.length()<3){
                conC+=carattere;
            }
        }
    }
}

        


int main(){
    cout<<"inserire il nome: ";
    cin>>nome;
    cout<<"inserire il cognome: ";
    cin>>cognome;
    calcolaNome();
    cout<<conN<<endl;
    calcolaCognome();
    cout<<conC<<endl;


    return 0;
}
