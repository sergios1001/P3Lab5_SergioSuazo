#include "Arquero.h"

Arquero::Arquero()
{
	vida=100;
	poder=20;
}

int Arquero::getVida(){
	return vida;
}

void Arquero::setVida(int vida)
{
	this->vida=vida;
}

void Arquero::ataque(){
	
}

Arquero::~Arquero()
{
}
