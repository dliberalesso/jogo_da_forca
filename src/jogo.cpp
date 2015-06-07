#include "jogo.hpp"

Jogo::Jogo()
{
  erros = 0;
  Dicionario meu_dicionario;
  saudacao();
  Palavra resposta = meu_dicionario.buscaPalavra(dificuldade);
  string adivinhe(resposta.getComprimento(), '-');
  
  char palpite;
  
  while (erros) {
    mostraForca();
    cout << adivinhe << endl;
    cin >> palpite;
    palpite = toupper(palpite);
    
    if (resposta.contem(palpite)) {
      adivinhe = resposta.getParcial(adivinhe, palpite);
      if (adivinhe == resposta.getString()) break;
    } else {
      tentadas.push_back(palpite);
      erros--;
    }
  }
  
  mostraForca();
  if (adivinhe == resposta.getString()) {
    cout << "GANHOU! ";
  } else {
    cout << "Perdeu! ";
  }
  cout << "A palavra era: " << resposta.getString() << endl;
}

void Jogo::mostraForca()
{
  system("cls");
  
  cout << "  _______  \t";
  if (tentadas.size()) {
    cout << "Tentou: ";
    for (int i = 0; i < tentadas.size(); i++) {
      cout << tentadas[i] << " ";
    }
  }
  cout << endl;

  cout << " |/      | " << endl;
  
  if (erros < 4) {
    cout << " |      (_) " << endl;
  } else {
    cout << " |          " << endl;
  }
  
  if (erros < 3) {
    cout << " |      \\|/ " << endl;
  } else {
    cout << " |          " << endl;
  }
  
  if (erros < 2) {
    cout << " |       |  " << endl;
  } else {
    cout << " |          " << endl;
  }
  
  if (erros < 1) {
    cout << " |      / \\ " << endl;
  } else {
    cout << " |          " << endl;
  }
  
  cout << " |          " << endl;
  cout << "_|___       \t";
}

void Jogo::saudacao()
{
  mostraForca();
  setDificuldade();
}

void Jogo::setDificuldade()
{
  char dif = 'a';  
  while (!((dif == 'f') || (dif == 'm') || (dif == 'd'))) {
    cout << "Selecione a dificuldade (f)acil, (m)edio, (d)ificil: ";
    cin >> dif;
    tolower(dif);
  }
  
  if (dif == 'f') {
    dificuldade = 0;
  } else if (dif == 'm') {
    dificuldade = 1;
  } else {
    dificuldade = 2;
  }
  
  erros = 4;
}
