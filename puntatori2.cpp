#include <fstream>
using namespace std;
void scambia(int *a, int *b);
void scambia(int *a, int *b)
{
    int *appo=a;
    a=b;
    b=appo;
}

int main()
{
    ofstream file("output.txt");
    file.is_open();
    int *a;
    int *b;
    int i=1;
    int l=2;
    a=&i;
    b=&l;
    file<<"a "<<a<<endl;
    file<<"b "<<b<<endl;
    scambia(a, b);
    file<<"a "<<a<<endl;
    file<<"b "<<b<<endl;
    file.close();
}
