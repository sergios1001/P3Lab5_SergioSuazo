#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>  
#include "Civilizacion.h"
#include "Habitante.h"
#include "Aldeano.h"
#include "Guerrero.h"
#include "Jinete.h"
#include "Caballero.h"
#include "Arquero.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu(){
	int retValue=0;
	
	while(retValue < 1 || retValue > 3){
		
		cout<<"       Age Of Empires"<<endl
			<<"1.- Crear Civilizacion"<<endl
			<<"2.- Jugar"<<endl
			<<"3.- Salir"<<endl
			<<"Ingrese una opcion entre 1 y 3: ";
			
			cin>>retValue;

			
			if(retValue >= 1 && retValue <= 3){
				break;
			}
				
			else{
						
				cout<<endl<<"Opcion incorrecta, elija nuevamente "<<endl;
			}
					
	}//end while
	
	
	return retValue;
}

int menuJuego(){
	int retValue=0;
	
	while(retValue < 1 || retValue > 10){
		
		cout<<"       JUEGA"<<endl
			<<"1.- Crear Aldeano"<<endl
			<<"2.- Crear Jinete"<<endl
			<<"3.- Crear Arquero"<<endl
			<<"4.- Crear Caballero"<<endl
			<<"5.- Construir casa"<<endl
			<<"6.- Construir cuartel"<<endl
			<<"7.- Construir establo"<<endl
			<<"8.- Ir a guerra"<<endl
			<<"9.- Suiguiente hora"<<endl
			<<"10.- Salir"<<endl
			<<"Ingrese una opcion entre 1 y 10: ";
			
			cin>>retValue;

			
			if(retValue >= 1 && retValue <= 10){
				break;
			}
				
			else{
						
				cout<<endl<<"Opcion incorrecta, elija nuevamente "<<endl;
			}
					
	}//end while
	
	
	return retValue;
}

int menuGuerra(){
	int retValue=0;
	
	while(retValue < 1 || retValue > 2){
		
		cout<<"       Guerra"<<endl
			<<"1.- Siguiente turno"<<endl
			<<"2.- Rendirse"<<endl
			<<"Ingrese una opcion entre 1 y 2: ";
			
			cin>>retValue;

			
			if(retValue >= 1 && retValue <= 2){
				break;
			}
				
			else{
						
				cout<<endl<<"Opcion incorrecta, elija nuevamente "<<endl;
			}
					
	}//end while
	
	
	return retValue;
}

vector<Civilizacion*> civilizaciones;
vector<Guerrero*> guerreros;
vector<Habitante*> cola;
Civilizacion* miCivilizacion;
Civilizacion* oponente;

int main(int argc, char** argv) {
	int option=0;
	while( option != 3 ) {
		
		switch( option = menu() ){ 
		
			case 1:{
				string nombre;
				cout<<"Ingrese el nombre de la Civilizacion: ";
				cin>>nombre;
				civilizaciones.push_back(new Civilizacion(nombre));
				cout<<"Se creo la civilizacion exitosamente!"<<endl;
				break;
			}
			case 2:{
				for(int i=0;i<civilizaciones.size();i++){
					cout<<i<<"- "<<civilizaciones[i]<<endl;
				}
				int elegir;
				cout<<"Seleccione la civilizacion con la cual desea jugar: ";
				cin>>elegir;
				
				miCivilizacion=civilizaciones[elegir];
				int jugada=0;
				while(jugada!=10)
				{
					switch( jugada = menuJuego() ){
						
						case 1:{
							
							if(miCivilizacion->getAlimento()>=25){
								
								if(miCivilizacion->getHabitantes().size()+cola.size()+1<=miCivilizacion->getMaxHabitantes())
								{
									cola.push_back(new Aldeano());
									miCivilizacion->setAlimento(miCivilizacion->getAlimento()-25);
									cout<<"Falta 1 hora para la creacion del Aldeano"<<endl;
								}
								else
								{
									cout<<"No tiene espacio suficiente para otro aldeano"<<endl;								
								}	
							}
							else
							{
								cout<<"No tiene los materiales necesarios para un nuevo aldeano"<<endl;
							}
							break;
						}
						case 2:{
							
							if(miCivilizacion->getAlimento()>=75 && miCivilizacion->getOro()>=20 && miCivilizacion->getMadera()>=5){
								
								if(miCivilizacion->getHabitantes().size()+cola.size()+1<=miCivilizacion->getMaxHabitantes())
								{
									if(miCivilizacion->getEstablos()>0){
										cola.push_back(new Jinete());
										miCivilizacion->setAlimento(miCivilizacion->getAlimento()-75);
										miCivilizacion->setOro(miCivilizacion->getOro()-20);
										miCivilizacion->setMadera(miCivilizacion->getMadera()-5);
										cout<<"Faltan 6 horas para la creacion del Jinete"<<endl;	
									}
									else
									{
										cout<<"No tiene establo para crear jinetes"<<endl;
									}
								}
								else
								{
									cout<<"No tiene espacio suficiente para otro jinete"<<endl;								
								}	
							}
							else
							{
								cout<<"No tiene los materiales necesarios para un nuevo jinete"<<endl;
							}						
							break;
						}
						case 3:{
							
							if(miCivilizacion->getAlimento()>=50 && miCivilizacion->getOro()>=10 && miCivilizacion->getMadera()>=10){
								
								if(miCivilizacion->getHabitantes().size()+cola.size()+1<=miCivilizacion->getMaxHabitantes())
								{
									if(miCivilizacion->getCuarteles()>0){
										cola.push_back(new Arquero());
										cout<<"Faltan 4 horas para la creacion del Arquero"<<endl;	
										miCivilizacion->setAlimento(miCivilizacion->getAlimento()-50);
										miCivilizacion->setOro(miCivilizacion->getOro()-10);
										miCivilizacion->setMadera(miCivilizacion->getMadera()-10);
									}
									else
									{
										cout<<"No tiene cuartel para crear arqueros"<<endl;
									}
								}
								else
								{
									cout<<"No tiene espacio suficiente para otro arquero"<<endl;								
								}	
							}
							else
							{
								cout<<"No tiene los materiales necesarios para un nuevo arquero"<<endl;
							}	
							break;
						}
						case 4:{
							
							if(miCivilizacion->getAlimento()>=50 && miCivilizacion->getOro()>=15 && miCivilizacion->getMadera()>=5){
								
								if(miCivilizacion->getHabitantes().size()+cola.size()+1<=miCivilizacion->getMaxHabitantes())
								{
									if(miCivilizacion->getCuarteles()>0)
									{
										cola.push_back(new Caballero());
										cout<<"Faltan 4 horas para la creacion del Caballero"<<endl;
										miCivilizacion->setAlimento(miCivilizacion->getAlimento()-50);
										miCivilizacion->setOro(miCivilizacion->getOro()-15);
										miCivilizacion->setMadera(miCivilizacion->getMadera()-5);
									}
									else
									{
										cout<<"No tiene un cuartel para crear caballeros"<<endl;
									}
								}
								else
								{
									cout<<"No tiene espacio suficiente para otro caballero"<<endl;								
								}	
							}
							else
							{
								cout<<"No tiene los materiales necesarios para un nuevo caballero"<<endl;
							}		
							break;
						}
						case 5:{
							if(miCivilizacion->getMadera()>=50)
							{
								miCivilizacion->setCasas(miCivilizacion->getCasas()+1);
								cout<<"Se creo una casa en la Civilizacion"<<endl;
							}
							else
							{
								cout<<"No tiene los materiales necesarios para crear una casa"<<endl;
							}
							break;
						}
						case 6:{
							if(miCivilizacion->getOro()>=50 && miCivilizacion->getMadera()>=200)
							{
								miCivilizacion->setCuarteles(miCivilizacion->getCuarteles()+1);
								cout<<"Se creo una cuartel en la Civilizacion"<<endl;
							}
							else
							{
								cout<<"No tiene los amteriales necesarios para crear un cuartel"<<endl;
							}
							break;
						}
						case 7:{
							if(miCivilizacion->getOro()>=50 && miCivilizacion->getMadera()>=150)
							{
								miCivilizacion->setEstablos(miCivilizacion->getEstablos()+1);
								cout<<"Se creo un establo en la civilizacion"<<endl;
							}
							else
							{
								cout<<"No tiene los materiales necesarios para crear un establo"<<endl;
							}
							break;
						}
						case 8:{
							bool perder=false;
							bool ganar=false;
							int movimiento = 0;							
							vector <Guerrero*> ejercito;
							for(int i=0;i<civilizaciones.size();i++)
							{
								cout<<i<<"- "<<civilizaciones[i]<<endl;
							}
							int elegir;
							cout<<"Seleccione la civilizacion a la cual desea atacar: ";
							cin>>elegir;
							oponente = civilizaciones[elegir];
							for(int i = 0; i<miCivilizacion->getHabitantes().size();i++)
							{
								Guerrero *g = dynamic_cast<Guerrero*>(miCivilizacion->getHabitantes()[i]);
								if(g!=0)
								{
									ejercito.push_back(g);
								}
							}
							
							while(!ganar || !perder || movimiento!=2)
							{
								switch(movimiento = menuGuerra())
								{
									case 1:{
										
										int pos;
										for(int i=0;i<ejercito.size();i++)
										{
											pos = rand() % oponente->getHabitantes().size();
											ejercito[i]->ataque(oponente->getHabitantes()[pos]);
											if(oponente->getHabitantes()[pos]->getVida()<=0)
											{
												oponente->getHabitantes().erase(oponente->getHabitantes().begin()+pos);
											}
											Guerrero *x = dynamic_cast<Guerrero*>(oponente->getHabitantes()[pos]);
											if(x!=0){
												x->ataque(ejercito[i]);
											}
											
											if(ejercito[i]->getVida()<=0){
												ejercito.erase(ejercito.begin()+i);
											}
										}
										
										
										if(oponente->getHabitantes().size()==0)
										{
											ganar=true;
										}
										
										if(ejercito.size()==0)
										{
											perder=true;
										}
										cout<<"Te quedan "<<ejercito.size()<<" guerreros"<<endl;
										cout<<"Al oponente le quedan "<<oponente->getHabitantes().size()<<" habitantes"<<endl;
										break;
									}
									case 2:{
										cout<<"Se ha rendido..."<<endl;
										break;
									}
								}
							}
							break;
						}
						case 9:{
							
							for(int i=0;i<cola.size();i++){
								//cola Aldeanos
								Aldeano *a = dynamic_cast<Aldeano*>(cola[i]);
								if(a!=0)
								{
									cola[i]->setHora(cola[i]->getHora()-1);
									cout<<"Se agrego el Aldeano a la civilizacion"<<endl;
									miCivilizacion->getHabitantes().push_back(cola[i]);
									cola.erase(cola.begin()+i);
								}
								//cola Jinetes
								Jinete *j = dynamic_cast<Jinete*>(cola[i]);
								if(j!=0)
								{
									cola[i]->setHora(cola[i]->getHora()-1);
									if(cola[i]->getHora()==0)
									{
										miCivilizacion->getHabitantes().push_back(cola[i]);
										cout<<"Se agrego el Jinete a la civilizacion"<<endl;
										cola.erase(cola.begin()+i);
									}
									else{
										cout<<"Al Jinete le faltan "<<cola[i]->getHora()<<" hora(s)"<<endl;
									}									
								}
								//cola Caballeros
								Caballero *c = dynamic_cast<Caballero*>(cola[i]);
								if(c!=0)
								{
									cola[i]->setHora(cola[i]->getHora()-1);
									if(cola[i]->getHora()==0)
									{
										miCivilizacion->getHabitantes().push_back(cola[i]);
										cout<<"Se agrego el Caballero a la civilizacion"<<endl;
										cola.erase(cola.begin()+i);
									}
									else{
										cout<<"Al Caballero le faltan "<<cola[i]->getHora()<<" hora(s)"<<endl;
									}	
								}
								//cola Arqueros
								Arquero *ar = dynamic_cast<Arquero*>(cola[i]);
								if(ar!=0)
								{
									cola[i]->setHora(cola[i]->getHora()-1);
									if(cola[i]->getHora()==0)
									{
										miCivilizacion->getHabitantes().push_back(cola[i]);
										cout<<"Se agrego el Arquero a la civilizacion"<<endl;
										cola.erase(cola.begin()+i);
									}
									else{
										cout<<"Al Arquero le faltan "<<cola[i]->getHora()<<" hora(s)"<<endl;
									}
									
								}	
							}// end for
							
							int contAldeano;
							
							for(int i=0;i<miCivilizacion->getHabitantes().size();i++){
								Aldeano *a = dynamic_cast<Aldeano*>(cola[i]);
								if(a!=0){
									contAldeano++;
								}
							}
							
							//Asignacion de Materiales
							miCivilizacion->setAlimento(miCivilizacion->getAlimento()+(contAldeano*5));
							miCivilizacion->setOro(miCivilizacion->getOro()+(contAldeano*3));
							miCivilizacion->setMadera(miCivilizacion->getMadera()+(contAldeano*4));
							
							
							break;
						}
						case 10:{
							cout<<"Saliendo del juego..."<<endl;
							break;
						}
						
					}//end switch
					
				}//end while
				break;	
			} 
			    
			case 3:{
				//salir
				cout<<"Saliendo del programa..."<<endl;
				break;

			}
						
		}//switch
	
	}//while
	return 0;
}
