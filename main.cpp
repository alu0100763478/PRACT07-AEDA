#include <iostream>
#include <cstdlib>
#include <cstddef>

#include "AVL.hpp"
#include "DNI.hpp"
<<<<<<< HEAD
#include "logger.cpp"

DNI pedir_int()
{
	int insertar;
	Logger logger;
	logger.logger("Introduzca una clave: ");
	cin >> insertar;
	DNI dni(insertar);
	return dni;
}

int main ()
{

	Logger logger;
    logger.logger("-------------------------------------------");
    logger.logger("   PRÁCTICA 6: ÁRBOL BINARIO DE BÚSQUEDA");
    logger.logger("-------------------------------------------");

	logger.logger("Modo a ejecutar: ");
	logger.logger("1. Modo demostración.");
	logger.logger("2. Modo estadística.");

=======



int main ()
{
    
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "   PRÁCTICA 6: ÁRBOL BINARIO DE BÚSQUEDA" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;


	std::cout << "Modo a ejecutar: " << std::endl;
	std::cout << "1. Modo demostración." << std::endl;
	std::cout << "2. Modo estadística." << std::endl;
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
	int modo;
	cin >> modo;

	if(modo == 1){

		AVL<DNI> arbol(NULL);
		int eleccion = -1;
		while(eleccion!=0){
<<<<<<< HEAD

			logger.logger();
			logger.logger("MODO DEMOSTRACIÓN");
			logger.logger("[0] Salir");
			logger.logger("[1] Insertar Clave");
			logger.logger("[2] Eliminar Clave");
			logger.logger("Opción: ");
			cin >> eleccion;

			switch(eleccion)
			{
				case 1:	;
					arbol.insertar(pedir_int());
				break;

				case 2:
					arbol.eliminar(pedir_int());
				break;

			default:
				break;

			}//switch

			arbol.mostrarAVL(cout);

		}//menu

	} // modo

	if(modo == 2){


		logger.logger("MODO ESTADÍSTICA");

		int sizeArbol;
		logger.logger("Tamaño del árbol: ");
		cin >> sizeArbol;

		int nPruebas;
		logger.logger("Inserta el número de pruebas a realizar: ");
		cin >> nPruebas;

		DNI* secuencia = new DNI[nPruebas*2];
		for(int i=0; i<nPruebas*2; i++)
			secuencia[i] = (rand()%50000000)+30000000;

		AVL<DNI> arbol(NULL);

		for(int i=0; i<nPruebas; i++)
			arbol.insertar(secuencia[i]);

		logger.logger();
		logger.logger("-------------------------------------");
		logger.logger("     RESULTADOS DEL EXPERIMENTO:");
		logger.logger("-------------------------------------");

		logger.logger("INSERCIÓN:");
		logger.logger("N ",sizeArbol);
		logger.logger(" | PRUEBAS ",nPruebas);
		logger.logger(" | MAX: ",MAXIMO);
		logger.logger(" | PROMEDIO: ",(MAXIMO+MINIMO)/2);
		logger.logger(" | MIN: ",MINIMO);
		logger.logger();

		ACUMULADOR = 0;
		MAXIMO = 0;
		MINIMO = 0;

		for(int i=0; i<nPruebas; i++)
			arbol.eliminar(secuencia[i]);

		logger.logger("BÚSQUEDA:");
		logger.logger("N ",sizeArbol);
		logger.logger(" | PRUEBAS ",nPruebas);
		logger.logger(" | MAX: ",MAXIMO);
		logger.logger(" | PROMEDIO: ",(MAXIMO+MINIMO)/2);
		logger.logger(" | MIN: ",MINIMO);
		logger.logger();

	}
}
=======
			std::cout << std::endl;
			std::cout << "MODO DEMOSTRACIÓN" << std::endl;
			std::cout << "[0] Salir" << std::endl;
			std::cout << "[1] Insertar Clave" << std::endl;
			std::cout << "[2] Eliminar Clave" << std::endl;
			std::cout << "Opción: ";
			cin >> eleccion;
			
			switch(eleccion)
			{
				case 1: 
				{
					int insertar;
					std::cout << "Introduzca una clave a añadir: ";
					cin >> insertar;
					DNI dni_insertar(insertar);
					
					arbol.insertar(dni_insertar);
					
					arbol.mostrarAVL();
					
					break;
				}
				case 2: 
				{
					int eliminado;
					std::cout << "Introduzca una clave a eliminar: ";
					cin >> eliminado;
					DNI dni_eliminar(eliminado);
					
					arbol.eliminar(dni_eliminar);
					arbol.mostrarAVL();
					break;
				}	

			}//switch

		}//menu

	} // modo
	
	if(modo == 2){
		
		std::cout << std::endl;
		std::cout << "MODO ESTADÍSTICA" << std::endl;
		
		int sizeArbol;
		std::cout << "Tamaño del árbol: ";
		cin >> sizeArbol;
		
		int nPruebas;
		std::cout << "Inserta el número de pruebas a realizar: ";
		cin >> nPruebas;
		
		DNI* secuencia = new DNI[nPruebas*2];
		for(int i=0; i<nPruebas*2; i++)
			secuencia[i] = (rand()%50000000)+30000000;
			
		AVL<DNI> arbol(NULL);	
		
		for(int i=0; i<nPruebas; i++)
			arbol.insertar(secuencia[i]);
			
		std::cout << "-------------------------------------\n";
		std::cout << "     RESULTADOS DEL EXPERIMENTO:\n";
		std::cout << "-------------------------------------\n";

		std::cout << "INSERCIÓN:\n";
		std::cout << "N " << sizeArbol << " | PRUEBAS " << nPruebas << " | MAX: " << MAXIMO << " | PROMEDIO: "<< (MAXIMO+MINIMO)/2 << " | MIN: " << MINIMO << std::endl;	
		ACUMULADOR = 0;
		MAXIMO = 0;
		MINIMO = 0;
		
		for(int i=0; i<nPruebas; i++)
			arbol.eliminar(secuencia[i]);
			
		std::cout << "BÚSQUEDA:\n";
		std::cout << "N " << sizeArbol << " | PRUEBAS " << nPruebas << " | MAX: " << MAXIMO << " | PROMEDIO: "<< (MAXIMO+MINIMO)/2 << " | MIN: " << MINIMO << std::endl;		
		
	}
}
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
