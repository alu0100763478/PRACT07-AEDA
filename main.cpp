#include <iostream>
#include <cstdlib>
#include <cstddef>

#include "AVL.hpp"
#include "DNI.hpp"
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

	int modo;
	cin >> modo;

	if(modo == 1){

		AVL<DNI> arbol(NULL);
		int eleccion = -1;
		while(eleccion!=0){

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
