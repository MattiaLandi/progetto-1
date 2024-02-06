#include <iostream>
using namespace std;
int fat_iter(int n)
{
  int i = n;
   int ris =n;
   
    do{
        i--;
     ris = ris*i;
     
    }while(i!=1);
    return(ris);
}
int fat_ric(int n){
 
 return n*fat_iter(n-1);
}
int main() {
   int num = 0;
   cout<<"numero da inserire"<<endl;
   cin>>num;
   int ris;
   ris=fat_ric(num);
   cout<<ris<<endl;
    return 0;
}
