#include<iostream>
using namespace std;
int main()
{
    int i,j,n,posicion,valor,minimo,a[30];
    cout<<"Ingrese el numero de elementos: ";
    cin>>n;
    cout<<"\nIngrese los elementos: \n";
 
    for(i=0;i<n;i++)
    {
        cin>>a[i]; //lista llena
    }
    for(i=0;i<n-1;i++)
    {
        minimo=a[i]; //primer numero como minimo
        posicion=i;
        for(j=i+1;j<n;j++) 
        {
            if(minimo>a[j]) //ve si el numero que le sigue es mayor o no
            {
                minimo=a[j];
                posicion=j;
            }
        }
        valor=a[i]; //aca se intercambian las posiciones de los numeros
        a[i]=a[posicion];
        a[posicion]=valor; 
    }
    cout<<"\nLa lista ordenada es la siguiente: \n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";  //imprime el arreglo ordenado
    }
    return 0;
}
