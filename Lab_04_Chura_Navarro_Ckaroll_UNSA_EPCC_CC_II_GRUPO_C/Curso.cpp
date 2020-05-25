#include<iostream>
#include<conio.h>
using namespace std;
//ejercicio1:
class Curso{
	private: //Atributos
		string nombre;
		string codigo;
		int nroAlumnos;
	public: //metodos
		Curso();  //Constructor
		void setNombre(string nombre); //tipo void porque no devuelve nada
		void setCodigo(string codigo);
		void setNroAlumnos(int nroAlumnos);
		string getNombre(); //muestra la info de los gets
		string getCodigo();
		int getNroAlumnos();
};
Curso::Curso(){ //Metodo constructor
}
//Establecemos valores a los atributos
void Curso::setNombre(const string nom) //Curso asigna la clase a la que pertenece
{										//Establece los valores a los atributos
	nombre=nom; //igualamos a la variable
}
void Curso::setCodigo(const string cod)
{
	codigo=cod;
}
void Curso::setNroAlumnos(const int nroAlum)
{
	nroAlumnos=nroAlum;
}
string Curso::getNombre() //pertenece a la clase curso
{
	return nombre;
}
string Curso::getCodigo() 
{
	return codigo;
}
int Curso::getNroAlumnos() 
{
	return nroAlumnos;
}
int main(){
	Curso C2;
	string nom; //declaramos las variables
	string cod;
	int nroAlum;
	cout<<"Introduce el nombre: "<<endl;cin>>nom; 
	cout<<"Introduce el codigo: "<<endl;cin>>cod;
	cout<<"Introduce el Nro. de Alumnos: "<<endl;cin>>nroAlum;
	C2.setNombre(nom);
	C2.setCodigo(cod); 
	C2.setNroAlumnos(nroAlum);
	cout<<"/nLos datos de la persona son: "<<C2.getNombre()<<endl;
	cout<<"EL codigo es: "<<C2.getCodigo()<<endl;
	cout<<"El numero de alumnos es: "<<C2.getNroAlumnos()<<endl;
	getch();
	return 0;
}
//Ejercicio2:
class ArregloDeCursos{
	private:
		Curso *cursosArr;
		int size;
	public:
		ArregloDeCursos(); //Constructor
		ArregloDeCursos(const Curso cursos[], const int tam); //Constructor1
		ArregloDeCursos(const ArregloDeCursos &o); //Constructor2
		~ArregloDeCursos(); //Destructor
		void redimensionar(int n);
		void push_back(const Curso &p);
		void insert(const int pos, const Curso &p);
		void remove(const int pos);
		const int getSize()const;
		void clear();
};
ArregloDeCursos::ArregloDeCursos(){//constructor
	size=0;cursosArr=new Curso[size];
}
ArregloDeCursos::ArregloDeCursos(const Curso cursos[], const int tam){
	size=tam;
	cursosArr=new Curso[size];
	for(int i=0;i<size;i++)
		*(cursosArr+i)=cursos[i];
}
ArregloDeCursos::ArregloDeCursos(const ArregloDeCursos &o){
	size=o.size;
	cursosArr=new Curso[size];
	for(int i=0;i<o.size;i++)
		*(cursosArr+i)=*(o.cursosArr+i);
}
ArregloDeCursos::~ArregloDeCursos(){//destructor
	delete [] cursosArr;
}
void ArregloDeCursos::redimensionar(int n){
	Curso*aux=new Curso[size];
	for(int i=0;i<size;i++)
		*(aux+i)=*(cursosArr+i);
	delete [] cursosArr;
	size=size+n;
	cursosArr=new Curso[size];
	for(int i=0;i<size;i++)
		*(cursosArr+i)=*(aux+i);
	delete [] aux;
}
void ArregloDeCursos::push_back(const Curso &p){
	this->redimensionar(1);
	*(cursosArr+size-1)=p;
}
void ArregloDeCursos::insert(const int pos, const Curso &p){
	this->redimensionar(1);
	for(int i=size-1;i>pos;i--)
		*(cursosArr+i)=*(cursosArr+i-1);
	*(cursosArr+pos)=p;
}
void ArregloDeCursos::remove(const int pos){
	for(int i=pos;i<size-1;i++)
		*(cursosArr+i)=*(cursosArr+i+1);
	this->redimensionar(-1);
}
const int ArregloDeCursos::getSize()const{return size;}
void ArregloDeCursos::clear(){
	this->redimensionar(-size);
}
