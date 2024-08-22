#include <stdio.h>

int pesquisaBinaria(int v[], int n, int chave) {
 	int inicio = 0, meio, fim;
 	fim = n - 1;
 	
	while (inicio <= fim) {
 		meio = (inicio + fim) / 2;
 		
		if (chave == v[meio]) {
 			return meio;
 			
 		} else if (chave < v[meio]) {
 			fim = meio - 1;
 			
 		} else {
 			inicio = meio + 1;
 		}
 	}
 	 
	return -1;
}

int compara(const void* a, const void* b) {
	return *(int*) a - *(int*) b;
}

int main() {
	int n = 4;
	int v[] = { 10, 15, 3, 7 };
	int k = 17;
	int i = 0, j = 0;
	
	qsort(v, n, sizeof(int), compara);
	
	for (i = 0; i < n; i++) {
		int vj = k - v[i];
		int j  = pesquisaBinaria(v, n, vj);
		
		if (j != -1 && j != i) {
			printf("verdadeiro\n");
			
			return 0;
		}
	}
	
	printf("falso\n");

	return 0;
}
