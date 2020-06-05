#ifndef CABALLERO_H
#define CABALLERO_H

#include "Guerrero.h"

class Caballero : public Guerrero
{
	public:
		Caballero();
		
		int getVida();
		void setVida(int);
		
		void ataque();
		
		~Caballero();
	protected:
};

#endif
