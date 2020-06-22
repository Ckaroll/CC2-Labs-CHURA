#include <iostream>
#include "2list.h"
#include "Node.h"
#ifndef null
#define nullptr 0
#endif
//argc como mínimo valdrá 1.
//argv contiene los argumentos que se han pasado desde el sistema operativo al invocar el programa.
int main(int argc, char const *argv[])
{
	List<int> list;
	list.insert(list.end(),2);
	list.insert(list.end(),3);
	list.insert(list.end(),4);

	auto iter = list.begin();
	iter = list.insert(iter,1); //inserta 1 antes que 2
	iter++;
	//auto deduce el tipo de variable declarada a partir de su expresión de inicialización.
	for(auto itr2 = list.begin(); itr2 != list.end(); itr2++){
		std::cout << *itr2 << std::endl;
	}
	return 0;
}
