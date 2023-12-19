#include <iostream>
#include <string>
using namespace std;
#define N 30
int main(){

char stringa[N];
cin >> stringa;
int contatore=0;
int i=0;
while (stringa[contatore] != '\0')
{
    contatore++;
}
cout<<"la stringa è:"<<contatore<<endl;
return 0;
}
