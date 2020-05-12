#include<iostream>
using namespace std;

int tamano(string arre){ // se le pasa el arreglo 
    int tam=0;//contador de tamaño
    while(arre[tam]!='\0'){ // tamaño de caena siempre es n+1 (+ 0), mientras sea diferente seguira el bucle
        tam++;// si aun no es igual a 0 seguira contando
    }
    return tam;//retorna el tamaño
}


int main(){
    string arr="peces";//cadena 
    cout<<tamano(arr);//llama a funcion
    return 0;
}
