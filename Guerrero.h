#ifndef GUERRERO_H
#define GUERRERO_H

#include "Habitante.h"

class Guerrero : public Habitante
{
	public:
		Guerrero();
		
		virtual void ataque();
		
		~Guerrero();
	protected:
		int poder;
};

#endif
