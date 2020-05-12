#include <iostream>
using namespace std;

int tamano(int arre[],int t){//recibe el arreglo y tamaño
    if (t==0){return 0;}//si el tamaÃ±o es cero solo regresa cero 
    return (tamano(arre,t-1) + 1);//cada ves que es t!=0, suma +1 y repite el proceso, pero con t-1; para seguir bajando
}
int main(){
    int array[] = {1,3,5,7,9,11,13};//declarar 
    int tam=7;// tamaño
    cout<<"#:"<<tamano(array,tam);// se llama a la funcion
 
}
