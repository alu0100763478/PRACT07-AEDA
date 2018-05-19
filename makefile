clean:
	rm ./AVL
	
all:
	g++ -g DNI.hpp nodoAVL.hpp AVL.hpp main.cpp -o AVL 