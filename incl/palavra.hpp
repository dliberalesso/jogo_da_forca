#ifndef PALAVRA_HPP
#define PALAVRA_HPP

#include <string>
#include "utilidades.hpp"

class Palavra
{
  public:
	  Palavra(string para_cadastrar);
	  string getString() {return str;}
	  int getComprimento() {return comprimento;}
	  int contem(char ch);
	  string getParcial(string adivinhe, char ch);
	  
	protected:
	  int comprimento;
	  string str;
};

#endif
