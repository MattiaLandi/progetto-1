#include <iostream> 
#include <cstdlib> 
#include <ctime> 
#define max 11 
using namespace std; 
int random(int x); 
int random(int x) 
{ 
int random; 
random = rand(); 
return random; 
} 
int main() 
{ 
srand(time(0)); 
char m; 
int num[12]; 
cout<<"Dimmi la modalta' di utilizzo del programma: "<<endl; 
cout<<"M = Manuale"<<endl; 
cout<<"A = Automatica"<<endl; 
cin>>m; 
if (m == 'M') 
{ 
for (int i; i<=max; i++) 
{ 

cout<<"Dimmi il numero"<<endl; 
cin>>num[i]; 

} 
int massimo = num[0]; 
for (int j; j<=max; j++) 
{ 
if (num[j]>massimo) 
{ 
massimo = num[j]; 
} 
} 
cout<<"Il numero piu' grande e': "<<massimo<<endl; 
} 
else if (m == 'A') 
{ 
for (int i; i <= max; i++) 
{ 
num[i] = random(num[i]); 
} 
int massimo = num[0]; 
for (int j; j <= max; j++) 
{ 
if (num[j]>=massimo) 
{ 
massimo = num[j]; 
} 
} 
cout<<"Il numero piu' grande e': "<<massimo<<endl; 
} 
}
 
