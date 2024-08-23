#include <stdio.h>

void swap(int v[], int i, int fim) {
	int aux = v[i];
	v[i]    = v[fim];
	v[fim]  = aux;
}

int partition(int v[], int inicio, int fim) {
	int pivo = v[fim];	   
	int i    = inicio - 1;
	int j 	 = 0;
	
	for (j = inicio; j <= fim - 1; j++) {
		if (v[j] < pivo) { 
			i++;
			
			swap(v, i, j); 
		}
	}
	
	swap(v, i + 1, fim); 
	
	return i + 1; 
}

void _quicksort(int v[], int inicio, int fim) {
 	if (inicio < fim) {
 		int meio = partition(v, inicio, fim);
 		
 		_quicksort(v, inicio, meio - 1); 
 		_quicksort(v, meio + 1, fim);
 	}
}

void quicksort(int v[], int n) {	
 	_quicksort(v, 0, n - 1);
}

int main() {
	int n = 3;
	int v[] = { 1, 2, 0 };
	int i = 0, j = 0;
	
	quicksort(v, n);
	
	int menorInt = v[0];

	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
			printf("%d, ", v[i]);
		
//			if (v[j] < menorInt && v[j] > 0 && menorInt != v[j]) {
				menorInt = v[j] + 1;
//			}
//		}
	}
	
	printf("\n%d, ", menorInt);
	
	return 0;
}
