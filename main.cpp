#include <iostream>
#include <cstdlib>
#include <cstddef>

#include "AVL.hpp"
#include "DNI.hpp"



int main ()
{
    
    std::cout << "-------------------------------------------" << std::endl;
    std::cout << "   PRÁCTICA 6: ÁRBOL BINARIO DE BÚSQUEDA" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;


	std::cout << "Modo a ejecutar: " << std::endl;
	std::cout << "1. Modo demostración." << std::endl;
	std::cout << "2. Modo estadística." << std::endl;
	int modo;
	cin >> modo;

	if(modo == 1){

		AVL<DNI> arbol(NULL);
		int eleccion = -1;
		while(eleccion!=0){
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