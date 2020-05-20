#include <iostream>
using namespace std;

int longitud(char *c1){
    int len = 0;
    while (*c1 != '\0'){        //Mientras no sea el final de la cadena.
        len++;c1++;             //Cadena c2 recibira valor de c1 por iteracion.
        
    }
    return len;
}
void conc(char *c1, char *c2){
    int n = longitud(c2);
    while (*c1 != '\0'){            //Mientras no sea el final de la cadena.
        c2[n] = *c1;c1++;c2++;      //Empieza a concatenar.
        
    }
}

void copiar (char *c1, char *c2) //Creamos la Funcion con 2 entradas con Punteros, para poder modificar sus valores.
{
    while (*c1 != '\0'){ //Mientras no sea el final de la cadena.
     *c2=*c1; c2++; c1++; //Cadena c2 recibira valor de c1 por iteracion.
    }
}

int main(){
    char a[25];
    char b[25];
    cout<<"Escriba la cadena a: "<<endl;cin>>a;
    cout<<"Escriba la cadena b: "<<endl;cin>>b;
    conc(a, b);
    cout<<"La cadena concatenada es: "<<b<<endl;
}