#include<iostream>
using namespace std;
void inverso(int arre[],int tam){
  for(int i=tam-1;i>=0;i--){//bucle que inicia desde el final del arreglo y decrece hasta 0
    cout<<arre[i];//imprime cada elemento a la inversa
  }
}
int main(){
    int arr[]={1,3,5,7,9,11,13};//declarar arreglo
    inverso(arr,7);//llama a funcion
    return 0;
}
