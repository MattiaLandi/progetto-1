#include <iostream>
using namespace std;

int main() {
    int ordine[10][10];
    for(int i=0;i<10;i++){
        for(int j=1;j<11;j++){ 
    ordine[i][j]=j*(i+1);
    cout<<ordine[i][j]<<'\t';
        }
        cout<<endl;
    }
    return 0;
}
