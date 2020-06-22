#ifndef LIST_H
#define LIST_H
#endif
#include <iostream>
#include "Node.h"

template <typename T>
class List
{
	Node<T>* head;
	Node<T>* size;
public:
	List(){
        head = size = nullptr;
	}
	~List(){
        while(head->next != nullptr){
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
        delete head;
	}

	//Falta constructor copia

	class iterator{
		friend class List;
		private:
			Node<T> *NodePtr;
			//Constructor private
			iterator(Node<T> *newPtr): NodePtr(newPtr){};
		public:
			iterator() : NodePtr(nullptr){};

			//sobrecarga <!=>
			bool operator!=(const iterator& itr) const{
				return NodePtr != itr.NodePtr;
			}
			//sobrecarga <*>
			T& operator*() const {
		    	return NodePtr->next->data;
		    }
		    //sobrecarga <++>
		    iterator operator++(int) {
		    	iterator temp = *this;
		    	NodePtr = NodePtr->next;
		    	return temp;
		    }
	}; //Fin del iterador de clase anidada

	iterator begin() const{
        return iterator(head);
	}
	iterator end() const{
        return iterator(size);
	}

	iterator insert(iterator posicion, const T& value){
        Node<T> *newNode = new Node<T>(value, posicion.NodePtr->next);
        if(posicion.NodePtr == size)
            size = newNode;
        posicion.NodePtr->next = newNode;
        return posicion;
	}
	iterator erase(iterator posicion){
        Node<T> *toDelete = posicion.NodePtr->next;
        posicion.NodePtr->next = posicion.NodePtr->next->next;
        if(toDelete == size)
            size = posicion.NodePtr;
        delete toDelete;
        return posicion;
	}

};


