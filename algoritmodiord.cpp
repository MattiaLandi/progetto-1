#include<iostream>
#define N 8
using namespace std;

int
main ()
{
  int array[N] = {5, 4, 3, 2, 1, 10, 7, 55};
  for (int i = 0; i < N - 1; i++)
    {
      int pos_minimo = i;
      for (int j = i+1; j < N; j++)
	{
	  if (array[pos_minimo] > array[j])
	    {
	      pos_minimo = j;
	    }
	}
      int temp = array[i];
      array[i] = array[pos_minimo];
      array[pos_minimo] = temp;
      for (int j = 0; j < N; j++)
	cout << array[j] << "\t";
      cout << endl;
    }
  return 0;
}
