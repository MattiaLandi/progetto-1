#include <iostream>
using namespace std;
#define N 10

int main()
{
    int array[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *pt = array;
    cout<<"elementi array"<<endl;
    while(pt != (array+10)) {
        cout<< *pt <<" ";
        pt++;
    }
    cout<<endl;
    

    return 0;
