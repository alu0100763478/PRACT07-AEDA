#include <iostream>
#include "globales.hpp"

<<<<<<< HEAD

=======
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
using namespace std;

template <class T>
class nodoAVL{
<<<<<<< HEAD

    private:
        int bal_;
        T clave_;
        nodoAVL *izquierdo_;
        nodoAVL *derecho_;

    public:

=======
    
    private:
        T clave_;
        int bal_;
        nodoAVL *izquierdo_;
        nodoAVL *derecho_;
    
    public:
    
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
    nodoAVL(T clave): bal_(0), clave_(clave), izquierdo_(NULL), derecho_(NULL){};
    nodoAVL(nodoAVL<T>* nodo): bal_(0), clave_(0), izquierdo_(NULL), derecho_(NULL){};
    nodoAVL(T clave, nodoAVL<T>* izq,nodoAVL<T>* der): bal_(0), clave_(clave), izquierdo_(izq), derecho_(der){};
	~nodoAVL(){};
	nodoAVL<T>*& get_izquierdo();
	nodoAVL<T>*& get_derecho();
	T get_clave();
	int get_bal();
	void set_izquierdo(nodoAVL<T>* nodo);
	void set_derecho(nodoAVL<T>* nodo);
	void set_bal(int bal);
	void set_clave(T clave);
<<<<<<< HEAD

};
=======
	
	void mostrarNodoAVL(void);
	
};	
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034

template<class T>
nodoAVL<T>*& nodoAVL<T>::get_izquierdo() {
    return izquierdo_;
}

template<class T>
nodoAVL<T>*& nodoAVL<T>::get_derecho() {
	return derecho_;
}
<<<<<<< HEAD

template<class T>
=======
	
template<class T>	
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
T nodoAVL<T>::get_clave() {
	return clave_;
}

template<class T>
int nodoAVL<T>::get_bal() {
	return bal_;
}

<<<<<<< HEAD
template<class T>
void nodoAVL<T>::set_izquierdo(nodoAVL<T>* nodo) {
	izquierdo_= nodo;

=======
template<class T>		
void nodoAVL<T>::set_izquierdo(nodoAVL<T>* nodo) {
	izquierdo_= nodo;
	    
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
}

template<class T>
void nodoAVL<T>::set_derecho(nodoAVL<T>* nodo) {
    derecho_=nodo;
<<<<<<< HEAD

=======
	    
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
}
template<class T>
void nodoAVL<T>::set_bal(int bal) {
    bal_=bal;
<<<<<<< HEAD

=======
	    
>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
}
template<class T>
void nodoAVL<T>::set_clave(T clave) {
    clave_=clave;
<<<<<<< HEAD

}
=======
	    
}

>>>>>>> ee6504d62de0d50d26a772704193fd2eacbab034
