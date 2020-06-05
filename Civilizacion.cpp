#include "Civilizacion.h"
#include <vector>

using namespace std;

Civilizacion::Civilizacion()
{
}

Civilizacion::~Civilizacion()
{
}

Civilizacion::Civilizacion(string nombre){
	this->nombre=nombre;
	this->casas=2;
	this->alimento=50;
	this->cuarteles=0;
	this->establos=0;
	this->madera=50;
	this->oro=50;
	this->maxHabitantes=10;
	this->habitantes.push_back(new Aldeano());
	this->habitantes.push_back(new Aldeano());
	this->habitantes.push_back(new Aldeano());
	this->habitantes.push_back(new Aldeano());
	this->habitantes.push_back(new Aldeano());
	this->habitantes.push_back(new Jinete());
}

int Civilizacion::getAlimento(){
	return alimento;
}
void Civilizacion::setAlimento(int alimento){
	this->alimento=alimento;
}

int Civilizacion::getMadera(){
	return madera;
}
void Civilizacion::setMadera(int madera){
	this->madera=madera;
}

int Civilizacion::getOro(){
	return oro;
} 
void Civilizacion::setOro(int oro){
	this->oro=oro;
}

int Civilizacion::getCasas(){
	return casas;
}
void Civilizacion::setCasas(int casas){
	this->casas=casas;
}

int Civilizacion::getCuarteles(){
	return cuarteles;
}
void Civilizacion::setCuarteles(int cuarteles){
	this->cuarteles=cuarteles;
}

int Civilizacion::getEstablos(){
	return establos;
}
void Civilizacion::setEstablos(int establos){
	this->establos=establos;
}

int Civilizacion::getMaxHabitantes(){
	return maxHabitantes;
}
void Civilizacion::setMaxHabitantes(int maxHabitantes){
	this->maxHabitantes=maxHabitantes;
}

vector<Habitante*>  Civilizacion::getHabitantes(){
	return habitantes;
}
void Civilizacion::setHabitante(Habitante* habitante){
	this->habitantes.push_back(habitante);
}







