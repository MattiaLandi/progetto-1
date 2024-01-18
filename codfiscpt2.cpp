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
    string mesi="ABCDEHLMPRST";

int main()
{
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
CF=anno.substr(anno.length()-2);
CF+=mesi[mese-1];
if(sesso=='M'){
    string Giorno = to_string(giorno);
    CF+=Giorno;
}
else{
    giorno=giorno+40;
    string Giorno = to_string(giorno);
    CF+=Giorno;
    
}
    

cout<<CF<<endl;
}
