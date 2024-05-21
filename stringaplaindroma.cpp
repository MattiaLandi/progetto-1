#include<iostream>
#define N 50
using namespace std;

int
main ()
{

  char stringa[N];
  cout << "Inserisci una stringa:" << endl;
  cin >> stringa;
  int j = 0, b = 0;
  while (stringa[j] != '\0')
    {
      j++;
    }
  cout << "Nella stringa ci sono " << j << " caratteri" << endl;
   for (int n = 0; n < j/2; n++)
    {
     if(stringa[n] == stringa[j-n-1])
        b=1;
     else
        b=0;
        } 
     if(b>0)
       cout << "Questa parola è palindroma" << endl;
     else
        cout << "Questa parola non è palindroma" << endl;
  return 0;
}
