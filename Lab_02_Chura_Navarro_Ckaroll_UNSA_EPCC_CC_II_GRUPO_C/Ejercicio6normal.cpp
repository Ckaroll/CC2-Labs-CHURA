#include <iostream> 
using namespace std;
void printArray(char arr[], int n)   //pasa el arreglo y el numero de elementos
{  
    int i;  
    for (i = 0; i < n; i++)  //iteracion para cada dato del arreglo
        cout << arr[i] << " ";   //los imprime
    cout << endl; 
}  

void copiar(char *&arrA,char *&arrB,int n1,int n2){ //funcion que copiara los elementos

    char* aux = new char[n1+n2];  // se crea un arreglo auxiliar del tamaño de la suma 2 arreglos
    
    for(int i=0; i < n2+1 ; i++)
    {
        aux[i] = arrA[i];  //se copian los arreglos en la cadena auxiliar
    }

    for(int i=0; i < n1 ; i++)
    {
        aux[i+n1] = arrB[i]; //se copian los arreglos en la cadena auxiliar
    }
    //delete[] arrB;
    arrB = aux;
}

//el puntero apunta a la cadena auxiliar y ya se puede imprimir

int main(void){
    char arr2[] = {'H','o','l','a'}; //arreglos por referencia
    char *arrB=arr2;
    char arr1[]= {'M','u','n','d','o'}; //arreglos por referencia
    char *arrA=arr1; 
    int n1= sizeof(arr1) / sizeof(arr1[0]); //el size es solo para sacar el tamaño del arreglo
    int n2= sizeof(arr2) / sizeof(arr2[0]);
  
    copiar(arrA,arrB,n1,n2);
    int n = sizeof(arrB) / sizeof(arrB[0]);
    printArray(arrB, n+1);
    
  
    return 0;  
    
}
