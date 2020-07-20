#include <iostream>

void value(const int &lref) // esta funci�n seleccionara argumentos de tipo lvalue
{
    std::cout << "lvalue reference to const\n";
}
void value(int &&rref) // esta funci�n seleccionar� argumentos de tipo rvalue
{
    std::cout << "rvalue reference\n";
}
int main()
{
    int a = 6;
    value(a); // version de la funcion que toma lvalues
    value(6); // version de la funcion que toma rvalues
    return 0;
}
