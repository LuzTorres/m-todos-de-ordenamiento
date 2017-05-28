#include <iostream>
#include <conio.h>// para condicion de paro
using namespace std;
void merge(int *,int, int, int);
void mergesort(int *a, int menor, int mayor)
{
    int mid;
    if (menor < mayor)
    {
        mid=(menor+mayor)/2; //divide lista en dos
        mergesort(a,menor,mid);
        mergesort(a,mid+1,mayor);
        merge(a,menor,mayor,mid);
    }
    return;
}
void merge(int *a, int menor, int mayor, int mid) //inicio del metodo
{
    int i, j, k, c[50];
    i = menor;
    k = menor;
    j = mid + 1;
    while (i <= mid && j <= mayor)// comparacion
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= mayor)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = menor; i < k; i++)
    {
        a[i] = c[i];
    }
}
int main()
{
    int a[20], i, b[20];
     cout<<"Metodo mergesort\n\n";
    cout<<"Ingrese cinco elementos:\n"; // ingrso de elmentos
    for (i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    mergesort(a, 0, 4);
    cout<<"Los elementos ordenados son:\n";//imprimir
    for (i = 0; i < 5; i++)
    {
        cout<<a[i];
    }
        getch();//parar
}
