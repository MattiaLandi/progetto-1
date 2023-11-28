#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std; 
#define N 9
int main() 
{ 
int number[N]; 
int appo=0;
size_t n; 
srand(time(NULL));
n = sizeof (int); 
cout<<"Total size of int: "<<n<<" Byte"<<endl; 
n = sizeof (char); 
cout<<"Total size of char:"<<n<<"byte"<<endl; 
n = sizeof (float); 
cout<<"Total size of float: "<<n<<"byte"<<endl; 
n = sizeof (size_t); 
cout<<"Memoria size_t: "<<n<<"byte"<<endl; 
n = (int) sizeof (number); 
cout<<"Total size of size_t: "<<n<<"byte"<<endl; 
n = (int) sizeof (number[0]); 
cout<<"Total size of the array: "<<n<<"byte"<<endl; 
n = sizeof(number)/sizeof (number[0]); 
cout<<"Total elements the array can hold is: "<<n<<endl; 
for(int i=0;i<N;i++){
    number[N]=rand()%55+1;
    cout<<number[N]<<'\t';
    appo=number[N];
    number[N]=number[N-i-1];
    number[N-i-1]=appo;
}
cout<<endl;
for(int j=0;j<N;j++){
    cout<<number[j]<<'\t';
}
   cout<<endl; 
return 0; 
}
