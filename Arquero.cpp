#include "Arquero.h"

Arquero::Arquero()
{
	vida=100;
	poder=20;
	hora=4;
}

int Arquero::getVida(){
	return vida;
}

void Arquero::setVida(int vida)
{
	this->vida=vida;
}

void Arquero::ataque(Habitante* habitante){
	habitante->setVida(habitante->getVida()-(poder+0.085*vida));
}

Arquero::~Arquero()
{
}
