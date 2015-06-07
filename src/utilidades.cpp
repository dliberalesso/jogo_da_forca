#include "utilidades.hpp"

void util::fim()
{
  cout << endl << string(32, '-') << endl;
  system("pause");
  system("cls");
}

int util::random(long long unsigned int n)
{
  time_t segundos;
  time(&segundos);
  srand((unsigned int) segundos);  
  return (rand() % n);
}
