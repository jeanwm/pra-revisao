#include <stdio.h>

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
