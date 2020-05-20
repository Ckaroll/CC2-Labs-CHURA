#include<iostream>
using namespace std;

void sumI(int* array,int len){//pasa por referncia
    int sum=0,i=0; // suma e inicialiacion
    while(i<len){//bucle hasta el lenanio
        sum+=*array++;//se suma el contenido de el puntero a suma
        i++;//incrementa el contador 
    }
    cout<<sum; 
}

int sumR(int *array,int len){
    if(len==0){//si el lenaño es cero, cierra el fx
        return 0;
    }
        return *array + sum(++array,--len);//se suma la posicion inicial, + se recorre 1 y se valua el arrayglo con 1-lenaño
}  


int main(){
    int arr[]={0,1,2,3,4,5,6}; //inicia array
    sumR(arr,7);//llama a fxr
    sumI(arr,7);//llama a fxi
    return 0;

}

