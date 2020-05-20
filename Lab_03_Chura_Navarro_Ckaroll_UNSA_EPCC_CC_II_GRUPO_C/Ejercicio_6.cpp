
#include <iostream>
using namespace std;

void CONCT (char *c1, char *c2) //dos referncias
{
    while (*c1 != '\0'){ //mientras no de a 0, que es el ultimo elemento de una cadena
     *s2=*c1; s2++; c1++; //Cadena s2 recibira valor de c1 por iteracion.
    }
}


int c = 0;
int main(){
    char a[50];
    char b[50];
    cout<<"Escriba la cadena a: "<<endl;cin>>a;
    CONCT(a, b);
    cout<<"La cadena copiada b es: "<<b<<endl;
}
