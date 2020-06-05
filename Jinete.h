#ifndef JINETE_H
#define JINETE_H

#include "Guerrero.h"

class Jinete : public Guerrero
{
	public:
		Jinete();

		int getVida();
		void setVida(int);
		
		void ataque();
		
		~Jinete();
	protected:
};

#endif
