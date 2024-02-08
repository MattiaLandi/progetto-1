#include <iostream>
using namespace std;
int fat_iter(int n)

}
int fib(int n){
    if (n==0)
    return 0;
    if (n==1)
    return 1;
    return fib(n-1) + fib(n-2);
}
int main() {
   int num = 0;
   cout<<"numero da inserire"<<endl;
   cin>>num;
   int ris;
   ris=fib(num);
   cout<<ris<<endl;
    return 0;
}
