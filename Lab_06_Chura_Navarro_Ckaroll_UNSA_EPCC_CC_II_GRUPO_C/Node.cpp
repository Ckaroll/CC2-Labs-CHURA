#include <iostream>
#include "Node.h"
#include <iostream>
#include "Node.h"
template <typename T>
class Node
{
public:
	T elem;
	Node <T>* next;

	//Constructors
	Node();
	//Node(const T& ); //, Node<T>*
	Node(const T& item, Node<T> *ptr = nullptr) : elem(item), next(ptr) {}

	//Destructor
	~Node(){
        delete next;
    }

	//setters y getters
	void setElem(T elem);
	void setNext(Node<T>* next);

	T getElem();
	Node <T>* getNext();

};
//Implementacion de la clase nodo
template <typename T>
Node<T>::Node(): next(nullptr){}

/*
template <typename T>
Node<T>::~Node(){delete next;};
*/
template <typename T>
void Node<T>::setElem(T elem){
	this->elem = elem;
}

template <typename T>
void Node<T>::setNext(Node<T>* next){
	this->next = next;
}

template <typename T>
T Node<T>::getElem(){return elem;}

template <typename T>
Node <T>* Node<T>::getNext(){return next;}
