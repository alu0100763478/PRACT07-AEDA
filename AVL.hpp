#include <iostream>
#include "nodoAVL.hpp"
#include <list>

<<<<<<< HEAD
template <class T>
class AVL{

    private:
        nodoAVL<T>* raiz_;

        void balanceo_1(nodoAVL<T>* &nodo, bool& crece);
        void balanceo_menos1(nodoAVL<T>* &nodo,bool& crece);
        void elimina_balanceo_menos_1(nodoAVL<T>* &nodo,bool& decrece);
        void eliminar_balanceo_1(nodoAVL<T>* &nodo,bool& decrece);

    public:

    AVL(nodoAVL<T>* nodo): raiz_(nodo){};

	~AVL() {};

	nodoAVL<T>* get_raiz();

	nodoAVL<T>* buscar(T clave, nodoAVL<T>* nodo);

=======

using namespace std;

template <class T>
class AVL{
    
    private:
        nodoAVL<T>* raiz_;
        
    public:
    
    AVL(nodoAVL<T>* nodo): raiz_(nodo){};

	~AVL() {};
	
	nodoAVL<T>* get_raiz();
	
	nodoAVL<T>* buscar(T clave, nodoAVL<T>* nodo);
	
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
	void insertar(T clave);
	void insertar_bal(nodoAVL<T>* &nodo,nodoAVL<T>* nuevo, bool& crece);
	void insert_re_balancea_izda(nodoAVL<T>* &nodo, bool& crece);
	void insert_re_balancea_dcha(nodoAVL<T>* &nodo,bool& crece);
<<<<<<< HEAD

=======
	
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
	void eliminar(T clave);
	void eliminarRama(nodoAVL<T>* &nodo, T clave, bool& decrece);
	void eliminar_re_balancea_izda(nodoAVL<T>* &nodo,bool& decrece);
	void eliminar_re_balancea_dcha(nodoAVL<T>* &nodo,bool& decrece);
<<<<<<< HEAD

	void sustituye(nodoAVL<T>* &eliminado,nodoAVL<T>* &sust,bool &decrece);

=======
	
	void sustituye(nodoAVL<T>* &eliminado,nodoAVL<T>* &sust,bool &decrece);
		
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
	void rotacion_DD(nodoAVL<T>* &nodo);
	void rotacion_II(nodoAVL<T>* &nodo);
	void rotacion_DI(nodoAVL<T>* &nodo);
	void rotacion_ID(nodoAVL<T>* &nodo);
<<<<<<< HEAD


	std::ostream& mostrarAVL(std::ostream& out);


=======
	
	
	void mostrarAVL();
    
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
};


template<class T>
nodoAVL<T>* AVL<T>::get_raiz() {
	return raiz_;
}

template<class T>
nodoAVL<T>* AVL<T>::buscar(T clave, nodoAVL<T>* nodo)
{
	if(nodo==NULL) return nodo;
	if(clave == nodo-> get_clave()) return NULL;
	if(clave < nodo->get_clave())
	    return buscar(clave, nodo->get_izquierdo());
    if(clave > nodo->get_clave())
	    return buscar(clave, nodo->get_derecho());

}

template<class T>
<<<<<<< HEAD
std::ostream& AVL<T>::mostrarAVL(std::ostream& out)
=======
void AVL<T>::mostrarAVL()
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
{

	list<nodoAVL<T>* > lista1;
	list<nodoAVL<T>* > lista2;

	int nivel=0;
	nodoAVL<T>* aux;
	nodoAVL<T>* nulo = new nodoAVL<T>(NULL);
<<<<<<< HEAD

=======
		
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
	lista1.push_front(raiz_);

	while((lista1.empty()== 0) && (lista2.empty()==1))
	{
<<<<<<< HEAD
		out << "Nivel: " << nivel << "  ";
=======
		std::cout << "Nivel: " << nivel << "  ";
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
		while(lista1.empty()==0)
		{
			aux = lista1.front();
			lista1.pop_front();
<<<<<<< HEAD
			if( aux -> get_clave() == 0 ) out << "[.]" << " ";
			else out << "[ "<< aux -> get_clave() << " ]" << " ";

=======
			if( aux -> get_clave() == 0 ) std::cout << "[.]" << " ";
			else std::cout << "[ "<< aux -> get_clave() << " ]" << " ";
			
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
			if( aux -> get_izquierdo() != NULL)	lista2.push_front( aux -> get_izquierdo());
			else lista2.push_front(nulo);

			if( aux -> get_derecho() != NULL) lista2.push_front( aux -> get_derecho());
			else lista2.push_front(nulo);
		}
		int contador = -1;
		while((lista2.empty()==0)&&(contador<nivel*2)){
			if(lista2.front() -> get_clave() == 0) contador++;
<<<<<<< HEAD

			lista1.push_front(lista2.front());
			lista2.pop_front();
		}

		if(contador >nivel*2){
			lista2.clear();
			lista1.clear();
		}
		out << std::endl;
		nivel++;
	}


}

template<class T>
void AVL<T>::insertar(T clave){

=======
			
			lista1.push_front(lista2.front());
			lista2.pop_front();
		}
		
		if(contador >nivel*2){
			lista2.clear();
			lista1.clear();
		}	
		std::cout << std::endl;
		nivel++;	
	}	

 
}    

template<class T>
void AVL<T>::insertar(T clave){
	
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
	nodoAVL<T> * nuevo= new nodoAVL<T>(clave,NULL,NULL);
	bool crece=false;
	insertar_bal(raiz_,nuevo,crece);
}

template<class T>
void AVL<T>::insertar_bal(nodoAVL<T>* &nodo,nodoAVL<T>* nuevo, bool& crece){

	if(nodo==NULL)
	{
		nodo=nuevo;
		crece=true;
	}
<<<<<<< HEAD

=======
	
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034

	else if (nuevo->get_clave() < nodo->get_clave())
	{
		ACUMULADOR++;
		insertar_bal(nodo->get_izquierdo(),nuevo,crece);
		if (crece)
			insert_re_balancea_izda(nodo,crece);
	}
	else
	{
		ACUMULADOR++;
		insertar_bal(nodo->get_derecho(),nuevo,crece);
		if (crece)
			insert_re_balancea_dcha(nodo,crece);
	}
<<<<<<< HEAD

=======
	
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
	if(ACUMULADOR>MAXIMO) MAXIMO = ACUMULADOR;
	if(ACUMULADOR<MINIMO) MINIMO = ACUMULADOR;
}

<<<<<<< HEAD

template<class T>
void AVL<T>::balanceo_1(nodoAVL<T>* &nodo, bool& crece)
{
	nodoAVL<T>* nodo1=nodo->get_izquierdo();
		if(nodo1->get_bal()==1)
			rotacion_II(nodo);
		else
			rotacion_ID(nodo);

  crece=false;
}

=======
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
template<class T>
void AVL<T>::insert_re_balancea_izda(nodoAVL<T>* &nodo, bool& crece)
{
	switch(nodo->get_bal())
	{
		case -1: nodo->set_bal(0);
				 crece=false;
				 break;
		case 0: nodo->set_bal(1);
				break;
<<<<<<< HEAD
		case 1:
			balanceo_1(nodo,crece);
			break;
		default:
				break;
=======
		case 1: nodoAVL<T>* nodo1=nodo->get_izquierdo();
				if(nodo1->get_bal()==1)
					rotacion_II(nodo);
				else
					rotacion_ID(nodo);
				crece=false;
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
	}
}

template<class T>
<<<<<<< HEAD
void AVL<T>::balanceo_menos1(nodoAVL<T>* &nodo,bool& crece)
{
	nodoAVL<T>* nodo1=nodo->get_derecho();
			 if(nodo1->get_bal()==-1)
			 	rotacion_DD(nodo);
			 else
			 	rotacion_DI(nodo);
		 crece=false;
}

template<class T>
=======
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
void AVL<T>::insert_re_balancea_dcha(nodoAVL<T>* &nodo,bool& crece)
{
	switch (nodo->get_bal())
	{
		case 1: nodo->set_bal(0);
				crece=false;
				break;
		case 0: nodo->set_bal(-1);
				break;
<<<<<<< HEAD
		case -1:
			 balanceo_menos1(nodo,crece);
			 break;
		default:
			break;
=======
		case -1: nodoAVL<T>* nodo1=nodo->get_derecho();
				 if(nodo1->get_bal()==-1)
				 	rotacion_DD(nodo);
				 else
				 	rotacion_DI(nodo);
				 crece=false;
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
	}
}

template<class T>
void AVL<T>::eliminar(T clave)
{
	bool decrece=false;
	eliminarRama(raiz_,clave,decrece);
}


template<class T>
void AVL<T>::eliminarRama(nodoAVL<T>* &nodo,T clave,bool& decrece)
{
	if(nodo==NULL) return;
	if(clave < nodo->get_clave())
	{
		ACUMULADOR++;
		eliminarRama(nodo->get_izquierdo(),clave,decrece);
		if(decrece)
			eliminar_re_balancea_izda(nodo,decrece);
	}
	else if (clave > nodo->get_clave())
	{
		ACUMULADOR++;
		eliminarRama(nodo->get_derecho(),clave,decrece);
		if(decrece)
			eliminar_re_balancea_dcha(nodo,decrece);
	}
	else
	{
		nodoAVL<T>* eliminado=nodo;
		if (nodo->get_izquierdo()==NULL)
		{
			nodo=nodo->get_derecho();
			decrece=true;
		}
		else if(nodo->get_derecho()==NULL)
		{
			nodo=nodo->get_izquierdo();
			decrece=true;
		}
		else
		{
			sustituye(eliminado,nodo->get_izquierdo(),decrece);
			if(decrece)
				eliminar_re_balancea_izda(nodo,decrece);
		}
		delete eliminado;
	}
<<<<<<< HEAD

=======
	
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
	if(ACUMULADOR>MAXIMO) MAXIMO = ACUMULADOR;
	if(ACUMULADOR<MINIMO) MINIMO = ACUMULADOR;
}


template<class T>
void AVL<T>::sustituye(nodoAVL<T>* &eliminado,nodoAVL<T>* &sust, bool &decrece)
{
	if(sust->get_derecho()!=NULL)
	{
		sustituye(eliminado,sust->get_derecho(),decrece);
		if(decrece)
			eliminar_re_balancea_dcha(sust,decrece);
	}
	else
	{
		eliminado->set_clave(sust->get_clave());
		eliminado=sust;
		sust=sust->get_izquierdo();
		decrece=true;
	}
}

<<<<<<< HEAD
template<class T>
void AVL<T>::elimina_balanceo_menos_1(nodoAVL<T>* &nodo,bool& decrece)
{
	nodoAVL<T>* nodo1=nodo->get_derecho();
			 if(nodo1->get_bal() > 0)
			 	rotacion_DI(nodo);
			 else
			 {
			 	if(nodo1->get_bal()==0)
			 		decrece=false;
			 	rotacion_DD(nodo);
			 }
}
=======

>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
template<class T>
void AVL<T>::eliminar_re_balancea_izda(nodoAVL<T>* &nodo,bool& decrece)
{
	switch(nodo->get_bal())
	{
<<<<<<< HEAD
		case -1:
				elimina_balanceo_menos_1(nodo,decrece);
				break;
=======
		case -1: 
		{
			nodoAVL<T>* nodo1=nodo->get_derecho();
				 if(nodo1->get_bal() > 0)
				 	rotacion_DI(nodo);
				 else
				 {
				 	if(nodo1->get_bal()==0)
				 		decrece=false;
				 	rotacion_DD(nodo);
				 }
				 break;
		}
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
		case 0: nodo->set_bal(-1);
				decrece=false;
				break;
		case 1: nodo->set_bal(0);
				break;
<<<<<<< HEAD

		default:
				break;
	}
}

template<class T>
void AVL<T>::eliminar_balanceo_1(nodoAVL<T>* &nodo,bool& decrece)
{
	nodoAVL<T>* nodo1=nodo->get_izquierdo();
			if(nodo1->get_bal() < 0)
				rotacion_ID(nodo);
			else
			{
				if(nodo1->get_bal()== 0)
					decrece=false;
				rotacion_II(nodo);
			}
}
=======
	}
}

>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034

template<class T>
void AVL<T>::eliminar_re_balancea_dcha(nodoAVL<T>* &nodo,bool& decrece)
{
	switch(nodo->get_bal())
	{
<<<<<<< HEAD
		case 1:
			eliminar_balanceo_1(nodo,decrece);
			break;
=======
		case 1: 
		{
				nodoAVL<T>* nodo1=nodo->get_izquierdo();
				if(nodo1->get_bal() < 0)
					rotacion_ID(nodo);
				else
				{
					if(nodo1->get_bal()== 0)
						decrece=false;
					rotacion_II(nodo);
				}
				break;
		}
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
		case 0: nodo->set_bal(1);
				decrece=false;
				break;
		case -1: nodo->set_bal(0);
				 break;
<<<<<<< HEAD

		default:
				break;
=======
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
	}
}

template<class T>
void AVL<T>::rotacion_DD(nodoAVL<T>* &nodo)
{
	nodoAVL<T>* nodo1=nodo->get_derecho();
	nodo->set_derecho(nodo1->get_izquierdo());
	nodo1->set_izquierdo(nodo);
	if(nodo1->get_bal()==-1)
	{
		nodo->set_bal(0);
		nodo1->set_bal(0);
	}
	else
	{
		nodo->set_bal(-1);
		nodo1->set_bal(1);
	}
	nodo=nodo1;
}

template<class T>
void AVL<T>::rotacion_ID(nodoAVL<T>* &nodo)
{
	nodoAVL<T>* nodo1 =nodo->get_izquierdo();
	nodoAVL<T>* nodo2=nodo1->get_derecho();
	nodo->set_izquierdo(nodo2->get_derecho());
	nodo2->set_derecho(nodo);
	nodo1->set_derecho(nodo2->get_izquierdo());
	nodo2->set_izquierdo(nodo1);

	if(nodo2->get_bal()== -1)
		nodo1->set_bal(1);
	else
		nodo1->set_bal(0);
	if(nodo2->get_bal()==1)
		nodo->set_bal(-1);
	else
		nodo->set_bal(0);

	nodo2->set_bal(0);
	nodo=nodo2;
}

template<class T>
void AVL<T>::rotacion_DI(nodoAVL<T>* &nodo)
{
	nodoAVL<T>* nodo1 =nodo->get_derecho();
	nodoAVL<T>* nodo2=nodo1->get_izquierdo();
	nodo->set_derecho(nodo2->get_izquierdo());
	nodo2->set_izquierdo(nodo);
	nodo1->set_izquierdo(nodo2->get_derecho());
	nodo2->set_derecho(nodo1);

	if(nodo2->get_bal()==1)
		nodo1->set_bal(-1);
	else
		nodo1->set_bal(0);
	if(nodo2->get_bal()==-1)
		nodo->set_bal(1);
	else
		nodo->set_bal(0);

	nodo2->set_bal(0);
	nodo=nodo2;
}

template<class T>
void AVL<T>::rotacion_II(nodoAVL<T>* &nodo)
{
	nodoAVL<T>* nodo1=nodo->get_izquierdo();
	nodo->set_izquierdo(nodo1->get_derecho());
	nodo1->set_derecho(nodo);
	if(nodo1->get_bal()==1)
	{
		nodo->set_bal(0);
		nodo1->set_bal(0);
	}
	else
	{
		nodo->set_bal(1);
		nodo1->set_bal(-1);
	}
	nodo=nodo1;
<<<<<<< HEAD
}
=======
}
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
