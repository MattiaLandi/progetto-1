#include <stdio.h>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
string fortnite;
string minecraft;
cout<<"inserire 1 stringa"<<endl;
cin>>fortnite;
cout<<"inserire 2 stringa"<<endl;
cin>>minecraft;
cout<<"le lettere uguali sono: ";
for(size_t i=0;i<fortnite.length()&&i<minecraft.length();i++){
    if(fortnite[i]==minecraft[i]){
        cout<<fortnite[i];

    
}

    
}
}

