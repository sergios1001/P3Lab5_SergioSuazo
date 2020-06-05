#include "Habitante.h"

Habitante::Habitante()
{
}

Habitante::~Habitante()
{
}

int Habitante::getVida(){
	return vida;
}

void Habitante::setVida(int vida)
{
	this->vida=vida;
}

int Habitante::getHora(){
	return hora;
}

void Habitante::setHora(int hora)
{
	this->hora=hora;
}
