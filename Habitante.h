#ifndef HABITANTE_H
#define HABITANTE_H

class Habitante
{
	public:
		Habitante();
		
		int getVida();
		void setVida(int);
		
		int getHora();
		void setHora(int);
		
		~Habitante();
	protected:
		int vida;
		int hora;
};

#endif
