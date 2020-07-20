#include <iostream>

class Holder{
  public:

    Holder(int size){         // Constructor
      m_data = new int[size];
      m_size = size;
    }

    Holder(const Holder& other) //lvalue argument
    {
      m_data = new int[other.m_size];  // (1)
      std::copy(other.m_data, other.m_data + other.m_size, m_data);  // (2)
      m_size = other.m_size;
    }

    Holder& operator=(const Holder& other)  //lvalue argument
    {
      if(this == &other) return *this;  // (1)
      delete[] m_data;  // (2)
      m_data = new int[other.m_size];
      std::copy(other.m_data, other.m_data + other.m_size, m_data);
      m_size = other.m_size;
      return *this;  // (3)
    }

    /*6. Investigar, describir e implementar un ejemplo usando
    *    el contructor move (move constructor)
    */

    //Constructor copia con una referencia rvalue
    Holder(Holder&& other)     // <-- rvalue reference
    {
      m_data = other.m_data;   // (1)
      m_size = other.m_size;
      other.m_data = nullptr;  // (2)
      other.m_size = 0;
    }

    
    /*7. Investigar, describir e implementar un ejemplo usando el 
     *   operador de asignación move (move assigment constructor)
     */
    //Sobrecargando el operador = con una referencia rvalue

    Holder& operator=(Holder&& other){     // <-- rvalue reference  
      
      if (this == &other) return *this;

      delete[] m_data;         // (1)

      m_data = other.m_data;   // (2)
      m_size = other.m_size;

      other.m_data = nullptr;  // (3)
      other.m_size = 0;

      return *this;
    }

    ~Holder() {               // Destructor
      delete[] m_data;
    }

  private:                    //Miembros dato
    int*   m_data;
    size_t m_size;
};

/*
* Esta funcion evidencia la falta de optimización cuando se tienen
* un constructor de copia tradicional (entrada const reference)
*/
Holder createHolder(int size){
  return Holder(size);
}


int main(int argc, char const *argv[]){

  Holder h1(10000); // constructor regular
  Holder h2 = h1;   // constructor copia
  Holder h3(h1);    // constructor copia (alternate syntax)

  Holder h = createHolder(1000); // constructor copia
  h = createHolder(500);         // operador de asginación
 
  return 0;
}
