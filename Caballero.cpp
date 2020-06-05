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

void Caballero::ataque(){
	
}

Caballero::~Caballero()
{
}
