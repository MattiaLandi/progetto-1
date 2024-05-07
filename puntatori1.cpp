#include <iostream>
using namespace std;
int main()
{
    int a=0;
    int b=0;
    float c=0;
    float d=0;
    int *p1;
    int *p2;
    float *p3;
    float *p4;
    p1=&a;
    p2=&b;
    p3=&c;
    p4=&d;
    cout<<"p1 "<<p1<<" in "<<*p1<<endl;
    cout<<"p2 "<<p2<<" in "<<*p2<<endl;
    cout<<"p3 "<<p3<<" in "<<*p3<<endl;
    cout<<"p4 "<<p4<<" in "<<*p4<<endl;
    p1++;
    p2++;
    p3++;
    p4++;
    cout<<"ptra ind: "<<p1<<" in "<<*p1<<endl;
    cout<<"ptrb ind: "<<p2<<" in "<<*p2<<endl;
    cout<<"ptrc ind: "<<p3<<" in "<<*p3<<endl;
    cout<<"ptrd ind: "<<p4<<" in "<<*p4<<endl;
}
