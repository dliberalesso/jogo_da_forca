#include "jogo.hpp"

int main(void)
{
  char opc = 's';
  
  while(opc == 's') {
    Jogo jogo;
    cout << "           \tGostaria de jogar novamente? (s|n): ";
    cin >> opc;
    tolower(opc);
  }
  
  util::fim();
  
  return 0;
}
