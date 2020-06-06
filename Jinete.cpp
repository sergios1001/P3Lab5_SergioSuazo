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

void Jinete::ataque(Habitante* habitante){
	habitante->setVida(habitante->getVida()-(poder+0.065*vida));
}


Jinete::~Jinete()
{
}
