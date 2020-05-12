#include <iostream>
using namespace std;
void inverso(int arre[],int tam){//recibe el arreglo
    if(tam == 1){//caso base 
        return;
    }else{
        int aux,i=0;//aux temporal y variable inicial en 0
        aux=arre[i];//se pone la variable en aux temporalmente para poder cambiar
        arre[i]=arre[tam-1];//el ultimo valor de cambia con el primero 
        arre[tam-1]=aux;//el valor auxiliar (i), se guarda en el ultimo
        inv(&arre[1],tam-2);
    }
}
int main(){
    int arr[]={1,3,5,7,9,11,13};//declara el arreglo 
    inverso(arr,7);// llama a funcion
    for(int i=0;i<7;i++) {//despues de la funcion existen nuevos valores
        cout<<arr[i]<<" ";//imprime los valores
    }
    return 0;
}
