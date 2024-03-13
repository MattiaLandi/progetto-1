#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

float calcolasomma(float num1, float num2) {
    float somma=(num1 +num2);
    return somma;
}

float  calcolosottrazione(float num1, float num2){
    float sott=(num1-num2);
    return sott;
}

float calcoloprodotto(float num1, float num2) {
    float prodotto=(num1*num2);
   return prodotto;
}

float calcolomedia( float num1, float num2){
    float media=(num1+num2)/2;
    return media;
}
float calcolapotenza( float num1, float num2){
    float p=1;
    for(int i=0;i<num2;i++){
 p=p*num2;
    }
    return p;
}


   
int main() {
    srand(time(NULL));
   float a;
    float b;
    a=rand()%19+1;
    b=rand()%19+1;
    cout<<a<<endl;
    cout<<b<<endl;
   float m=calcolomedia(a,b);
   cout<<" la media è "<<m;
   float s=calcolasomma(a,b);
   cout<<" la somma è "<<s;
   float p=calcoloprodotto(a,b);
   cout<<" il prodotto è "<<p;
   float sott=calcolosottrazione(a,b);
   cout<<" la sottrazzione è "<<sott;
   float pot=calcolapotenza(a,b);
   cout<<" la potenza è "<<pot;

}
