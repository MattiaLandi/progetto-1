#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

 string anno;
    int mese;
    int giorno;
    string pari:
    string dispari;
    char sesso;
    string ComNasc;
    string CF;
    string nome;
string cognome;
string conN;
string conC;
    string mesi="ABCDEHLMPRST";
   
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

void calcolaSesso(){
    if(sesso=='M'){
    string Giorno = to_string(giorno);
    CF+=Giorno;
    }
    else{
    giorno=giorno+40;
    string Giorno = to_string(giorno);
    CF+=Giorno;
    }
}

void calcolaComune(){
    if(ComNasc=="ANCONA"){
    CF+="A271";
    }
    if(ComNasc=="SENIGALLIA"){
    CF+="I608";
    }
    if(ComNasc=="JESI"){
    CF+="E38";
   
    }   
}

void calcolaPosizione(){
    for(int i=0;i<CF.length();i++){
        if(i%2==0){
            pari+=CF[i];
            
        }
        else{
            dispari+=CF[i];
        }
        
        
    }
}

int main()
{
cout<<"inserire il nome: ";
cin>>nome;
cout<<"inserire il cognome: ";
cin>>cognome;
cout<<"inserire giorno di nascita: "<<endl;
cin>>giorno;
cout<<"inserire mese di nascita: "<<endl;
cin>>mese;
cout<<"inserire anno di nascita: "<<endl;
cin>>anno;
cout<<"inserire comune di nascita: "<<endl;
cin>>ComNasc;
cout<<"inserire il sesso: "<<endl;
cin>>sesso;
calcolaNome();
calcolaCognome();
CF=conC;
CF+=conN;
CF+=anno.substr(anno.length()-2);
CF+=mesi[mese-1];
calcolaSesso();
calcolaComune();
calcolaPosizione();



cout<<CF<<endl;
}
