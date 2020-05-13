#include<iostream>  
using namespace std;  
int main ()  
{    
    int arreglo[10] = { 13,5,4,2,16,46,34,22,11,3};   
       
    cout<<"\nLa lista de entrada es: \n";
    for(int i=0;i<10;i++)  
    {  
        cout <<arreglo[i]<<"\t";  
    }    
    for(int k=1; k<10; k++)   //comparamos los elementos usando un incremento de 1 
    {  
        int valor  = arreglo[k];  //usamos una variable para poder hacer el cambio
        int j= k-1;  	//la variable j reemplazara al elemento anterior
        while(j>=0 && valor  <= arreglo[j])  //aqui empieza la magia
        {  
            arreglo[j+1] = arreglo[j];   //cambia las posiciones solo si se cumple la condicion
            j = j-1;  //disminuye el valor para seguir comprobando si los numeros anteriores necesitan ordenarse
        }  
        arreglo[j+1] = valor ;  //para todos los elementos
    }  
    cout<<"\nLa lista ordenada por insercion es: \n";
    for(int i=0;i<10;i++)  
    {  
        cout <<arreglo[i]<<"\t";  
    }  
    return 0;
}
