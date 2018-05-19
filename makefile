clean:
	rm ./AVL

all:
	g++ -g DNI.hpp nodoAVL.hpp AVL.hpp logger.cpp main.cpp -o AVL 
