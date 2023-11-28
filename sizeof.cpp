#include <iostream> 
using namespace std; 
int main() 
{ 
int number[16]; 
size_t n; 
n = sizeof (int); 
cout<<"Total size of int: "<<n<<" Byte"<<endl; 
n = sizeof (char); 
cout<<"Total size of char:"<<"byte"<<n<<endl; 
n = sizeof (float); 
cout<<"Total size of float: "<<"byte"<<n<<endl; 
n = sizeof (size_t); 
cout<<"Memoria size_t: "<<"byte"<<n<<endl; 
n = (int) sizeof (number); 
cout<<"Total size of size_t: "<<"byte"<<n<<endl; 
n = (int) sizeof (number[0]); 
cout<<"Total size of the array: "<<"byte"<<n<<endl; 
n = sizeof(number)/sizeof (number[0]); 
cout<<"Total elements the array can hold is: "<<n<<endl; 
return 0; 
}
