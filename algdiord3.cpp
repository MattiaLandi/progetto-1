#include <iostream>
using namespace std;
#define N 10
int main() {
   int vet[N] ; //N viene definita costante//
   int appo = 0;
   
   //gli elementi dell' array vengono stampati//
for(int i = 0;i<N;i++)
cin>>vet[i];

cout<<endl;
//l'array viene ordinato in ordine crescente//
for(int i = 0;i<N-1;i++){
    for(int j=0;j<N-1-i;j++){
        if(vet[j]<vet[j+1]){
   //se un elemento è maggiore del successivo gli elementi vengono scambiati tra loro//     
        appo=vet[j+1];
        vet[j+1]=vet[j];
        vet[j]=appo;
        }
    }
    
}
//l'array viene stampato e riordinato//
for(int i = 0;i<6;i++)
cout<<vet[i]<<" ";
    return 0;
}
 \
