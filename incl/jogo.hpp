#ifndef JOGO_HPP
#define JOGO_HPP

#include "dicionario.hpp"

class Jogo
{
  public:
    Jogo();
    
  protected:
    int dificuldade;
    int erros;
    vector<char> tentadas;
  
  private:
    void mostraForca();
    void saudacao();
    void setDificuldade();      
};

#endif
