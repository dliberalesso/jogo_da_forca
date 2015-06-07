#include "palavra.hpp"

Palavra::Palavra(string para_cadastrar)
{
  str = para_cadastrar;
  comprimento = str.length();
}

int Palavra::contem(char ch)
{
  if (str.find(ch) == string::npos) {
    return 0;
  } else {
    return 1;
  }
}

string Palavra::getParcial(string adivinhe, char ch)
{
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == ch) {
      adivinhe[i] = ch;
    }
  }
  return adivinhe;
}
