#include "Jinete.h"

Jinete::Jinete()
{
	vida=100;
	poder=30;
	hora=6;
}

int Jinete::getVida(){
	return vida;
}

void Jinete::setVida(int vida)
{
	this->vida=vida;
}

void Jinete::ataque(){
	
}


Jinete::~Jinete()
{
}
