#include<iostream> 
int main () {
	int aux,i,j,k;
	int n=4,A[n];
	printf("Metodo Bublesort\n\n");
	for (i=0; i<n; i++) {
		printf("Dame el dato %dn: \t",i+1);
		scanf("%d",&A);// leer dato
	}
	for (i=0;i<n;i++) { //empieza algoritmo
		for (j=0;j<n-i;j++) {
			if (A[j]>=A[j+1]) {
				aux=A[j];
				A[j]=A[j+1];
				A[j+1]=aux;
			}
		}
	}
	for (k=0;k<n;k++) {  //imprime algoritmo ordenado
		printf("lista ordenado");
		printf("%d",A[k]);
	}
	return aux;
}
