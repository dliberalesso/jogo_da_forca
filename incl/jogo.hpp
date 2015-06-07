#ifndef JOGO_HPP
#define JOGO_HPP

#include "dicionario.hpp"

class Jogo
{
  public:
    Jogo();
    void novoJogo();
    
  protected:
    int dificuldade;
    int erros;
    vector<char> tentadas;
    Dicionario meu_dicionario;
  
  private:
    void mostraForca();
    void saudacao();
    void setDificuldade();      
};

#endif
