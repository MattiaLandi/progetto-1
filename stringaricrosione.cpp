#include <algorithm>
#include <cctype>
#include <iostream>


using namespace std;

/* Prototipo della funzione */
int palindroma (char *vet, int i, int n);

int
main ()
{
  char stringa[100], new_stringa[100];
  cout << "Inserisci la stringa (Case Sensitive) da verificare se e` palindroma o meno: " << endl;
 
  cin.getline (stringa, sizeof (stringa));

  int cont = 0;
  for (int i = 0; stringa[i]; i++){
    if (stringa[i] != ' ')
      stringa[cont++] = stringa[i];	
  }
  stringa[cont] = '\0';

  if (palindroma (stringa, 0, strlen (stringa)))
    cout << "La stringa " << stringa << " e` palindroma!" << endl;
  else
    cout << "La stringa " << stringa << " non e` palindroma!" << endl;
  return 0;
}
