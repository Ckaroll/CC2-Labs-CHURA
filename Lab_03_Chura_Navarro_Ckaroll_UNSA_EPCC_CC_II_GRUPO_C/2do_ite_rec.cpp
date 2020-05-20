#include<iostream>
using namespace std;
void printt(int*A,int t){
     for(int i=0;i<t;i++)
	 cout<<*A++<<" ";
}
void swap(int *a,int *b){//pasa por referncia 
     int temp=*a;//auxiliar guarda el contenido del ptr a 
     *a=*b;//contenido del ptr b se guarda en ptr a
     *b=temp;//temporal se guarda en el contenido del r b
}
void reversevector(int A[],int t){ //iterativo
     int *a=A; //apunta a la primera posicion
     int *b=(a+t-1); //apunta a la ultima posicion
     for(int i=0;i<t/2;i++){
	 swap(a++,b--); //primer puntero va hacia adelante y el segundo va retrocediendo
     }
}
void reverserecursivo(int *a,int *b,int t){ //recursivo
     if(b<=a){ //mientras sea menor o igual
	    return;
     }
        swap(a++,b--); //hace el intercambio
        reverserecursivo(a,b,t-1); //vuelve a llamar a la funcion
}
int main(){
    int A[10]={1,2,3,4,5,6,7,8,9,10};
    int *a=&A[0]; //apunta a la primera posicion
    int *b=&A[9];//apunta a la ultima posicion
    printt(A,10);// LLAMADAS A fx 
    cout<<"\n";
    reversevector(A,10);
    printt(A,10);
    cout<<"\n";    
    reverserecursivo(a,b,10);
    printt(A,10);
    return 0;
}