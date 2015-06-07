#include "dicionario.hpp"

Dicionario::Dicionario()
{
  string linha;
  ifstream arquivo("dicionario.txt");
  
  if (arquivo.is_open()) {
    while (getline (arquivo, linha)) {
      Palavra palavra(linha);
      if (palavra.getComprimento() <= 4) {
        dificeis.push_back(palavra);
      } else if (palavra.getComprimento() <= 10) {
        medias.push_back(palavra);
      } else {
        faceis.push_back(palavra);
      }      
    }
    arquivo.close();
  } else {
    cout << "nao foi possivel abrir o arquivo ";
    cout << "\"dicionario.txt\"" << endl;    
  }
}

Palavra Dicionario::buscaPalavra(int dificuldade)
{
  if (dificuldade == 0) {
    return faceis[util::random(faceis.size())];
  } else if (dificuldade == 1) {
    return medias[util::random(medias.size())];
  } else {
    return dificeis[util::random(dificeis.size())];
  }
}
