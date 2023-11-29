#include <iostream>
using namespace std;
/*float multa(float x, float y){
float multa;
multa=
return multa;*/
int main()
{
    float Vmax;
    float Vril;
    cout<<"inserisci velocità massima:"<<endl;
    cin>>Vmax;
    cout<<"inserisci velocità rilevata:"<<endl;
    cin>>Vril;
    if(Vril>Vmax){
        float eccesso=1.5*(Vril-Vmax);
        float multa=eccesso+50;
        if(multa>150){
            multa=150;
        }
        cout<<"importo multa:"<<multa<<endl;
    }
    else{
        cout<<"nessuna multa:"<<endl;        
    }
}
