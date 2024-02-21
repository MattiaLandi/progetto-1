#include <iostream>
#include <string.h>
#include <algorithm>
#include <cctype>


using namespace std;


int palindroma (char *vet, int i, int n);

int
main ()
{
  char stringa[100], new_stringa[100];
  cout << "Inserisci la stringa (Case Sensitive) da verificare se e` palindroma o meno: " << endl;
 
  cin.getline (stringa, sizeof (stringa));

  int count = 0;
  for (int i = 0; stringa[i]; i++){
    if (stringa[i] != ' ')
      stringa[count++] = stringa[i]; 
  }
  stringa[count] = '\0';

  if (palindroma (stringa, 0, strlen (stringa)))
    cout << "La stringa " << stringa << " e` palindroma!" << endl;
  else
    cout << "La stringa " << stringa << " non e` palindroma!" << endl;
  return 0;
}



int
palindroma (char *vet, int i, int n) 
{
  if (n <= i)
    return 1;
  else
    {
      if (vet[i] == vet[n - 1])
return palindroma (vet, i + 1, n - 1);
      else
return 0;
    }
}
