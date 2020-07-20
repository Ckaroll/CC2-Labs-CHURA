#include <iostream>
#include <utility>
#include <vector>
#include <string>
 
int main()
{
    std::string str = "Hello";
    std::vector<std::string> v;
 
    // usando push_back(const T&), significa que el programa
    //asumir� el costo de copiar los datos
    v.push_back(str);
    std::cout << "After copy, str is \"" << str << "\"\n";
 
    // usando una referencia rvalue en  push_back(T&&)  
    // significa que no se copiar� ningun string; en su lugar
    // se mover� el contenido al vector lo que resulta menos
    // constoso, pero dejar� a str vac�a.
    v.push_back(std::move(str));
    std::cout << "After move, str is \"" << str << "\"\n";
 
    std::cout << "The contents of the vector are \"" << v[0]
                                         << "\", \"" << v[1] << "\"\n";

    return 0;
}
