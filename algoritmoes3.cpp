#include <iostream>
using namespace std;
#define N 6
int main() {
   int vet[N] {0, 7, 5, 2, 8, 1};
   int max = 0, appo = 0;
   
   
for(int i = 0;i<N;i++)
cout<<vet[i]<<" ";
cout<<endl;
for(int i = 0;i<N-1;i++){
    for(int j=0;j<N-1-i;j++){
        if(vet[j]>vet[j+1]){
        
        appo=vet[j+1];
        vet[j+1]=vet[j];
        vet[j]=appo;
        }
    }
    
}
for(int i = 0;i<6;i++)
cout<<vet[i]<<" ";
    return 0;
}
