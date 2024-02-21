#include<iostream>
#define N 10
using namespace std;

int f(int n){
    
    if (n<N)
    return (n);
   
    if (n%2==0)
    return  (n % 10 + f(n / 10));
    if(n%2!=0 && n>=N)
    return f(n-1);
    
    
    }

int main ()
{
int n = 0;
cin>>n;
int ris =f(n);

cout<<"il risultato è: "<< ris <<endl;

  return 0;
}
