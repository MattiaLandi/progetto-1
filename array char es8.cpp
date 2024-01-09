#include<iostream>
#include <fstream>
using namespace std;

int
main ()
{
  ofstream myfile;
  char stringa[100];
  cout << "Insert the string: " << endl;
  cin >> stringa;


  int l = 0;
  char char_max;
  int cont;
  int cont_max = 0;
  while (stringa[l] != '\0')
    l++;

  for (int i = 0; i < l; i++) {
      cont = 0;
      for (int j = 0; j < l; j++) {
	  if (stringa[i] == stringa[j])
	    cont++;
	}
      if (cont > cont_max) {
	  cont_max = cont;
	  char_max = stringa[i];
	}
    }
  myfile.open ("/tmp/example.txt");
  myfile << "Most repeated character is: " << char_max << " " << cont_max << " times" << endl;
  myfile.close();
  return 0;
}
