#include "jogo.hpp"

int main(void)
{
  char opc = 's';
  Jogo jogo;
  
  while(opc == 's') {
    jogo.novoJogo();
    cout << "           \tGostaria de jogar novamente? (s|n): ";
    cin >> opc;
    opc = tolower(opc);
  }
  
  util::fim();
  
  return 0;
}
