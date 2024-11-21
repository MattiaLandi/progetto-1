#include <iostream>
using namespace std;
#define N 10

int main()
{
   struct nodo{
       int valore;
       nodo *prossimo;
       
       nodo(int _valore, nodo* _prossimo)
       {
           valore = _valore;
           prossimo = _prossimo;
       }
   };
   
   nodo *testa = new nodo(0, NULL);
   
   nodo *current = testa;
   
   for(int i=1;i<N;i++){
       current->prossimo = new nodo(i*2, NULL);
       current = current->prossimo;
   }
   
   current = testa;
   while(current!=NULL){
       cout<<current->valore<<endl;
       current=current->prossimo;
   }
}
