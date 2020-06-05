#ifndef ARQUERO_H
#define ARQUERO_H

#include "Guerrero.h"

class Arquero : public Guerrero
{
	public:
		Arquero();
		
		int getVida();
		void setVida(int);
		
		void ataque();
		
		~Arquero();
	protected:
};

#endif
