#include <iostream>
#include <string>
#include <vector>

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

vector<Civilizacion*> civilizaciones;
vector<Guerrero*> guerreros;
vector<Habitante*> cola;
Civilizacion* miCivilizacion;

int main(int argc, char** argv) {
	int option=0;
	while( option != 3 ) {
		
		switch( option = menu() ){ 
		
			case 1:{
				
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
							
							
							break;
						}
						case 2:{
							break;
						}
						case 3:{
							break;
						}
						case 4:{
							break;
						}
						case 5:{
							break;
						}
						case 6:{
							break;
						}
						case 7:{
							break;
						}
						case 8:{
							break;
						}
						case 9:{
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
