#include <iostream> 
#include <cstdlib> 
#include <ctime> 
#define N 4 
using namespace std; 

struct orario {
    int ora, min, sec; 
};

int main() { 
    srand(time(0)); 
    orario lettura_orario[N]; 
    int maxo;
    int maxm;
    int maxs; 
    
    for(int i = 0; i<N;i++) { 
        lettura_orario[i].ora=rand()%24;
        lettura_orario[i].min=rand()%60;
        lettura_orario[i].sec=rand()%60;
        cout <<"Le ore sono: " << lettura_orario[i].ora << " i minuti sono: " << lettura_orario[i].min << " i secondi sono: " << lettura_orario[i].sec << endl;  
    } 
    
    maxo = lettura_orario[0].ora; 
    maxm = lettura_orario[0].min; 
    maxs = lettura_orario[0].sec; 
    
    for(int j=0; j<N; j++) { 
        if(lettura_orario[j].ora > maxo) { 
            maxo = lettura_orario[j].ora; 
        } 
        
        if(lettura_orario[j].min > maxm) { 
            maxm = lettura_orario[j].min; 
        } 
        
        if(lettura_orario[j].sec > maxs) { 
            maxs = lettura_orario[j].sec; 
        }  
    } 
    
    cout << "MASSIMO: " << "Le ore sono: " << maxo << " i minuti sono: " << maxm << " i secondi sono: " << maxs << endl; 
    
    return 0;
}
