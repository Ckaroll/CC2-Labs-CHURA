#include<iostream>
using namespace std;

int suma(int arre[],int tam){//paso de arr y su tama�oo
    int s=0;//suma de elementos
    if (tam==1){return arre[0];}//si el tama�o solo es de 1, retorna el primer valor que en computacion es 0
    else{ return arre[tam-1]+suma(arre,--tam);}// si no es asi, se repite el proceso 
}                                   //el arreglo disminuye en -1 y se suma a funcion restando en -1 el tama�o.
int main(){
    int arr[]={1,3,5,7,9,11,13};// declara el array
    cout<<suma(arr,7)<<endl;// llama a la funcion
    return 0;
}
