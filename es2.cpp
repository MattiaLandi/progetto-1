#include <iostream>
using namespace std;

int main(){
    
    
    int n;
    int n1;
    int contatore;
    
    cout<<"inserisci numero"<<endl;
    cin>>n;
    cout<<"inserisci un altro numero"<<endl;
    cin>>n1;
    
    while(n>n1)
    {
    
    n=n-n1;
    contatore++;
    cout<<n<<endl;
    
                                                                
    }
    cout<<"n1 è stato sottratto è"<<contatore<<endl;
    cout<<"il resto è"<<n<<endl;
}
    
    
    
