#ifndef CIVILIZACION_H
#define CIVILIZACION_H
#include <vector>
#include <string>
#include "Habitante.h"
#include "Aldeano.h"
#include "Jinete.h"




using namespace std;

class Civilizacion
{
	public:
		Civilizacion();
		Civilizacion(string nombre);
		
		string getNombre();
		void setNombre(string);
		
		int getMadera();
		void setMadera(int);
		
		int getOro();
		void setOro(int);
		
		int getAlimento();
		void setAlimento(int);
		
		int getMaxHabitantes();
		void setMaxHabitantes(int);
		
		int getCasas();
		void setCasas(int);
		
		int getCuarteles();
		void setCuarteles(int);
		
		int getEstablos();
		void setEstablos(int);
		
		vector<Habitante*> getHabitantes();
    	void setHabitante(Habitante*);
        		
		
		~Civilizacion();
	protected:
		string nombre;
		int madera,oro,alimento,maxHabitantes,casas,cuarteles,establos;
		vector<Habitante*> habitantes;
};

#endif
