#include <iostream>
#include <ctime>
using namespace std;

#define N 5

void righe(int array[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N-1;j++){
            for(int k=0;k<N-j-1;k++){
                if(array[i][k]>array[i][k+1]){
                    int temp=array[i][k];
                    array[i][k]=array[i][k+1];
                    array[i][k+1]=temp;
                }
              }
          }
        }
       }

void colonne(int array[N][N]){
    for(int j=0;j<N;j++){
        for(int i=0;i<N-1;i++){
            for(int k=0;k<N-i-1;k++){
                if(array[k][j]<array[k+1][j]){
                    int temp=array[k][j];
                    array[k][j]=array[k+1][j];
                    array[k+1][j]=temp;
            }
            }
         }
       }
     }

int main(){
    
    int array[N][N];

    srand(time(NULL));
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            array[i][j]=rand()%61+0;
            cout<<array[i][j]<<"\t";
        }
        cout<<endl;
    }

    righe(array);
    cout<<"Righe ordinate in modo crescente:"<<endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<array[i][j]<<"\t";
        }
        cout<<endl;
    }

    colonne(array);
    cout<<"Colonne ordinate in modo decrescente:"<< endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<array[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    return 0;
