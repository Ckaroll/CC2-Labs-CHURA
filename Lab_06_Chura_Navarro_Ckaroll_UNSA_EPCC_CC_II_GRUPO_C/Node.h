#include <iostream>
# ifndef NODE_H
# define  NODE_H
# endif
using namespace std;
template <typename T>
class Node
{
    private:
        T elem;
        Node<T>* next;
    public:
        Node();
        Node( T val);
        T getElem();
        Node<T>* getNext ();
        void setElem (T elem);
        void setNext(Node<T>* nextNode);
        
};
//constructor por defecto
template <typename T>
Node<T>::Node()
{
    next = NULL;
}

//constructor con parámetro
template <typename T>
Node<T>::Node( T val)
{
    next = NULL;
    elem = val;
}

template <typename T>
T Node<T>::getElem()
{
    return elem;
}

template <typename T>
Node<T>* Node<T>::getNext()
{
    return next;
}

template <typename T>
void Node<T>::setElem(T newElem)
{
    elem = newElem;
}

template <typename T>
void Node<T>::setNext(Node<T> *nextNode)
{
    next = nextNode;
}
