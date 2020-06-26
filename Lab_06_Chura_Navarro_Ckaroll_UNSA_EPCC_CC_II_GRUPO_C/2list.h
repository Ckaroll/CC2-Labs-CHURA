#include <iostream>
#include "Node.h"
using namespace std;
template<typename T>
class LinkedList
{
    private:
        int size;
        Node<T>* head;
    public:
        LinkedList();
        LinkedList(T newElem);
        LinkedList(const LinkedList<T>&listabase);
        void insertHead(T val);
        void insertTail(T val);
        void removeHead();
        void removeTail();
        void print();
        ~LinkedList();
        class Iterator; 
        Iterator begin()
        { 
            return Iterator(head); 
        } 
        Iterator end()
        { 
            return Iterator(NULL); 
        } 
        class Iterator 
        { 
            private: 
                Node<T>* NodeActual; 
            public:
                //Constructor por defecto 
                Iterator() noexcept : NodeActual (head) {} 
                //Constructor con parámetros
                Iterator(Node<T>* Node) noexcept :  NodeActual (Node) {} 
                    
                    Iterator& operator=(Node<T>* Node) 
                    { 
                        this->NodeActual = Node; 
                        return *this; 
                    } 

                    Iterator& operator++() 
                    { 
                        if (NodeActual) 
                            NodeActual = NodeActual->getNext(); 
                        return *this; 
                    } 

                    Iterator operator++(int) 
                    { 
                        Iterator iterator = *this; 
                        ++*this; 
                        return iterator; 
                    } 

                    bool operator!=(const Iterator& iterator) 
                    { 
                        return NodeActual != iterator.NodeActual; 
                    } 

                    T operator*() 
                    { 
                        return NodeActual->getElem(); 
                    } 
            }; 

};

//constructor por defecto
template<typename T>
LinkedList<T>::LinkedList()
{
    head = NULL;
    size = 0;
}

//constrcutor con parámetros
template<typename T>
LinkedList<T>::LinkedList(T val)
{
    head = new Node<T>(val);
    size = 1;
}

//inserta elementos al comienzo de la lista enlazada
template<typename T>
void LinkedList<T>::insertHead(T val)
{
    Node<T>* newNode = new Node<T> ();
    newNode->setElem(val);
    newNode->setNext(head);
    head = newNode;
    size++;
}

//inserta elementos al final de la lista enlazada
template<typename T>
void LinkedList<T>::insertTail(T val)
{
    Node<T>* newNode = new Node<T>(); 
    newNode->setElem(val);
    newNode->setNext(NULL); 
    if(head == NULL) 
        head = newNode; 
    else
    {
        Node<T>* temp = head;
        while (temp->getNext() != NULL) 
            temp = temp->getNext(); 
        temp->setNext(newNode);
    }
    size++;
}

//quita elementos del comienzo de la lista enlazada
template<typename T>
void LinkedList<T>::removeHead()
{
    if(size > 0)
    {
      Node<T>* temp = head;
      head = temp->getNext();
      delete temp;
      size--;
    }
    else if (head == NULL)
        cout<<"No hay más elementos por eliminar"<<endl;
    
}

//quita elementos del final de la lista enlazada
template<typename T>
void LinkedList<T>::removeTail()
{
    Node<T>* temp = head;
    Node<T>* prev = new Node<T>();
    while(temp->getNext() != NULL)
    {
        prev = temp;
        temp = temp->getNext();
    }
    temp->setNext(prev);
    prev->setNext(NULL);
    delete temp;
}

//imprime la lista enlazada
template<typename T>
void LinkedList<T>::print()
{
    Node<T>* temp = head;
    while( temp != NULL)
    {
        cout<< temp->getElem() <<" ";
        temp = temp->getNext();
    }
    cout<<endl;
}

//destructor
template <typename T>
LinkedList<T>::~LinkedList()
{
    while (head != NULL)
    {
        Node<T>* temp = head;
        head = head->getNext();
        delete temp;
    }
}
