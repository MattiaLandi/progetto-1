#include <iostream>
#include <cstdlib>
using namespace std;
#define N 10


int main()
{
    int array[N];
    for(int i=0;i<N;i++){
cout<<"inserisci i 10 numeri"<<endl;
cin>>array[i];
    }
for(int i=0;i<N;i++){
    for(int j=0;j<N-1;j++){
        if(array[j]<array[j+1]){
            int temp = array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
        
    }
}
for(int i=0;i<N;i++){
cout<<"array ordinato:"<<array[i]<<endl;
}
}
    
