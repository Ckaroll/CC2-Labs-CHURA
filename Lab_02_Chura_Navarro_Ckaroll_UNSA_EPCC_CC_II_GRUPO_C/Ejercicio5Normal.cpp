#include <iostream>
using namespace std;

int longitud(char cadena[])
{
   int acum = 0;
   while( cadena[acum] != '\0' )
       acum++;
   return acum;
}
void insertarCadena(char cadenaA[],char cadenaB[]){
    int tam1 = longitud(cadenaB);
    int x=0;
    for (int i = tam1; i<50; i++) {
        cadenaB[i] = cadenaA[x];
        x++;
    }
    
}
int z = 0;
int main(){
    char x[50];// espacio en memoria
    char y[50];
    cout<<"Escriba la cadena x: "<<endl;cin>>x;
    cout<<"Escriba la cadena y: "<<endl;cin>>y;
    insertarCadena(x, y);// llama fx
    cout<<"LA CADENA UNIDA ES: "<<y<<endl;
}
