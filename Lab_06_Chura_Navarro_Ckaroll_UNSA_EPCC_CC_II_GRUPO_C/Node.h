#ifndef NODE_H
#define NODE_H
#endif
template <typename T>
class Node
{
public:
	T elem;
	Node <T>* next;
	//Constructores
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

