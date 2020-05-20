#include <iostream>
using namespace std;

void ordenBurb(int *s1, int n){//pasa los parametris 
    int i,j,aux;
    for (i=0; i<n-1; i++)// i entra en si[0]
        for (j=i+1; j<n; j++)// j entra en si[1]
            if (s1[i]>s1[j]){//asi se comapran 
                aux=s1[i]; s1[i]=s1[j]; s1[j]=aux;//se intercambian 
            }
}

void most(int *s1){//pasa por referncia el arr
    while (*s1 != '\0'){//no termina hasta llegar al final del arr
        cout<<*s1<<" ";//imprime la posision
        s1++;//aumenta
    }
}
int main(){
    int arreglo[] = {3,1,8,4,5,9,7};// inicia el arr
    int tam = 7;//tamanio
    ordenBurb(arreglo, tam);//fx
    most(arreglo);
}