#ifndef DICIONARIO_HPP
#define DICIONARIO_HPP

#include <fstream>
#include <vector>
#include <stdlib.h>
#include "palavra.hpp"

class Dicionario
{
	public:
	  Dicionario();
	  Palavra buscaPalavra(int dificuldade);
	  
	protected:
	  vector<Palavra> faceis;
	  vector<Palavra> medias;
	  vector<Palavra> dificeis;
};

#endif
