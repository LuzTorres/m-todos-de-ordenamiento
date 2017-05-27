#include<iostream>
using namespace std;
void Imprimir(int a[] , int n)
{
    cout<<"Elementos Ordenados de Menor a Mayor"<<endl; //imprime los elementos ordenados
    for(int i=0;i<n;i++)
    cout<<"[ "<<a[i]<<" ]";
}
void Insercion(int a[] , int n)
{
    int i,j,aux; // inicio del algoritmo
    for(i=0;i<=n-1;i++)
    {
        aux=a[i];
        j=i-1;
        while((j>=0) && (aux<a[j]))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=aux;
    }
}
int main()
{
    int n;
    cout<<"Metodo inserccion\n"<<endl;
    cout<<"Cuantos elementos tiene el arreglo?"<<endl;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Ingrese el elemento: "<<(i+1)<<endl;
        cin>>num[i];
    }
    Insercion(num,n);
    Imprimir(num,n);
    return 0;
}
