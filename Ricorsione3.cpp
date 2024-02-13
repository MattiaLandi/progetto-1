#include <iostream>
using namespace std;
int f(int n, int m);
int f(int n, int m){
    if(m==0){ 
    return n;
    }
    
    return 1+f(n,m-1);
}
int main() {
    int ris=0, n=0, m=0;
    cout << "Inserire n: ";
    cin>>n;
    cout << "Inserire m: ";
    cin>>m;
    ris=f(n,m);
    cout<<ris<<"\t";

    return 0;
}
