#include<iostream>
using namespace std;

int ordenaAsc(int arre[],int tam){
    int aux;//valo auxiliar temporal
    for(int i=0;i<tam;i++){//bucle inicio de 0->
        for(int j=i+1;j<tam;j++){//bucle que inica de 1-> Asi compara (n) <> (n+1)
            if(arre[i]<arre[j]){// se comparan los valores 
                aux=arre[i];// valor a aux, temporalmente
                arre[i]=arre[j];//se guarda n+1 en n 
                arre[j]=aux;//valor de n en n+1
            }
        }
    }
    for(int i=0;i<tam;i++){cout<<arre[i]<<" ";}
}
int main(){
    int arr[]={1,3,5,7,9,11,13};//declara elarreglo 
    ordenaAsc(arr,7);//llama a funcion
    return 0;
}
