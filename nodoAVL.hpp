#include <iostream>
#include "globales.hpp"


using namespace std;

template <class T>
class nodoAVL{

    private:
        int bal_;
        T clave_;
        nodoAVL *izquierdo_;
        nodoAVL *derecho_;

    public:

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

};

template<class T>
nodoAVL<T>*& nodoAVL<T>::get_izquierdo() {
    return izquierdo_;
}

template<class T>
nodoAVL<T>*& nodoAVL<T>::get_derecho() {
	return derecho_;
}

template<class T>
T nodoAVL<T>::get_clave() {
	return clave_;
}

template<class T>
int nodoAVL<T>::get_bal() {
	return bal_;
}

template<class T>
void nodoAVL<T>::set_izquierdo(nodoAVL<T>* nodo) {
	izquierdo_= nodo;

}

template<class T>
void nodoAVL<T>::set_derecho(nodoAVL<T>* nodo) {
    derecho_=nodo;

}
template<class T>
void nodoAVL<T>::set_bal(int bal) {
    bal_=bal;

}
template<class T>
void nodoAVL<T>::set_clave(T clave) {
    clave_=clave;

}
