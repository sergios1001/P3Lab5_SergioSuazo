#include "Caballero.h"

Caballero::Caballero()
{
	vida=100;
	poder=10;
	hora=4;
}

int Caballero::getVida(){
	return vida;
}

void Caballero::setVida(int vida)
{
	this->vida=vida;
}

void Caballero::ataque(Habitante* habitante){
	habitante->setVida(habitante->getVida()-(poder+0.095*vida));
}

Caballero::~Caballero()
{
}
