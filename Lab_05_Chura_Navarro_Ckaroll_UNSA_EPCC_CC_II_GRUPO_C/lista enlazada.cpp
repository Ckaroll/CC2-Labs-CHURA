#include <iostream>
#include <stdlib.h>
using namespace std;
class Node{                     // representa un nodo en la lista
    private:                    // con variables miembro:
        int elem;               // elem(int)
        Node* next;             // next(Node*)
    public:
        Node(int, Node*);       // CONSTRUCTOR
        int  getElem();         // VARIABLES MIEMBRO PARA ACCESO/MODIFICACION
        void setElem(int);      // PARA ELEM
        Node* getNext();        // VARIABLES MIEMBRO PARA ACCESO/MODIFICACION
        void setNext(Node*);    // PARA NEXT
};

class LinkedList{               // representa a la lista enlazada
    private:                    // con variables miembro:
        int size;               // size(int)
        Node *head;             // head(Node*)
    public:
        LinkedList();           // CONSTRUCTOR
        ~LinkedList();          // DESTRUCTOR
        void print();           // FUNCION IMPRIMIR
        void insert(int);       // FUNCION INSERTAR
        void remove(int);       // FUNCION ELIMINAR
};

Node::Node(int elem, Node *next = nullptr) {        // CONSTRUCTOR
    this->elem = elem;                              // inicializar nuestras constantes
    this->next = next;                              // elem y next
}
int Node::getElem() {                               // GETTERS
    return elem;                                    // metodos que
}                                                   // permiten acceder al
Node* Node::getNext() {                             // valor del
    return next;                                    // atributo: Elem y Next
}
void Node::setElem(int elem) {                      // SETTERS
    this->elem = elem;                              // metodos que
}                                                   // fijan el
void Node::setNext(Node* next) {                    // valor de un
    this->next = next;                              // atributo: Elem y Next
}

LinkedList::LinkedList() {                          // CONSTRUCTOR
    this->size=0;                                   // tamaño de lista 0
	this->head=nullptr;                             // inicializado una constante de puntero nula
}

LinkedList::~LinkedList() {                         // DESTRUCTOR
        delete head;
}

void LinkedList::print(){                           // FUNCION IMPRIMIR
    Node *point = head;                            // creamos puntero (point)
    while(point !=0){
		cout << point -> getElem() << " ";         // recorrido
        point = point -> getNext();               // de la
	}                                               // lista
	cout<<"\n";
}

void LinkedList::insert(int newDato){               // FUNCION INSERTAR
    Node* point = head;                            //
    Node* newNode = new Node(newDato);              // UN NUEVO DATO EN
                                                    //
    if (point == nullptr){                         // UNA LA LISTA VACIA
        head = newNode;                             //
    }
    else if (newDato < point -> getElem()){        //
        newNode->setNext(head);                     // INSERTA EN LA CABEZA (POSICION 0)
        head = newNode;                             //
    }
    else {
        while (point -> getNext() != nullptr && point -> getNext() -> getElem() < newDato)
            point = point->getNext();             //
        if (point -> getNext() != nullptr)         // SIN SABER DONDE INSERTAR RECORRE LA LISTA
            newNode -> setNext(point -> getNext());// BUSCANDO LA POSICION CORRECTA
        point -> setNext(newNode);                 //
    }
    size++;
}

void LinkedList::remove(int elem) {                 //
    Node* point = head;                            // COMPRUEBA SI LA LISTA
    if (point == nullptr){                         // SE ENCUENTRA VACIA
        cout << "Lista vacia." << endl;     //
    }
    else if (point->getElem() == elem){            //
        head = point->getNext();                   // PERO SI LO ENCUENTRA LO BORRA
        delete point;                              // Y REDUCE LA LISTA
        size--;                                     //
    }
    else {
        Node* tmp;
        while(point->getNext() != nullptr){        //
            tmp = point;                           // RECORRE LA LISTA
            point = point->getNext();             // BUSCANDO EL ELEMENTO (ELEM)
            if (point->getElem() == elem){         // PARA ELIMINARLO
                tmp->setNext(point->getNext());    //
                delete point;                      // Y SI LLEGA A SER NULA LA BUSQUEDA
                size--;                             // ENTONCES NO LO ENCONTRO
                return;                             //
            }
        }
        cout << "El numero no esta en la lista." << endl;
    }
}
int main()
{
    LinkedList lista;
    lista.insert(10);
    lista.insert(3);
    lista.insert(4);
    lista.insert(0);
    lista.print();              // LISTA: 10 3 4 0

    lista.remove(3);
    lista.print();              // LISTA: 10 4 0

    lista.remove(-1);          // El numero no esta en la lista.
    lista.print();              // LISTA: 10 4 0

    lista.remove(10);
    lista.remove(4);
    lista.print();              // LISTA: 0

    lista.remove(10);
    lista.remove(10);           // La lista esta vacia.
    lista.print();              // LISTA:

    return 0;
}
