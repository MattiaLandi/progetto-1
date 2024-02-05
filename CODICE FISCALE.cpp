#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

 string anno;
    int mese;
    int giorno;
    char sesso;
    string ComNasc;
    string CF;
    string nome;
string cognome;
string conN;
string conC;
string mesi="ABCDEHLMPRST";
string carattereFissoS="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string alfabetoS="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int carattereFissoI []={0,1,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
int alfabetoI []={1,0,5,7,9,13,15,17,19,21,1,0,5,7,9,13,15,17,19,21,2,4,18,20,11,3,6,8,12,14,16,10,22,25,24,23};
int somma=0;
char carattereControllo;

    
   
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

void calcolaControllo(){
    for(int i=0;i<15;i++){
        if(i%2==0){
            somma+=carattereFissoI[carattereFissoS.find(CF[i])];
            
            
        }
        else{
            somma+=alfabetoI[alfabetoS.find(CF[i])];
        }
       carattereControllo="ABCDEFGHIJKLMNOPQRSTUVWXYZ" [somma%26];
        
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
calcolaControllo();
CF+=carattereControllo;



cout<<CF<<endl;
}
