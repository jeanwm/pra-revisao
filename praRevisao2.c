#include <stdio.h>

int compara(const void* a, const void* b) {
	return *(int*) a - *(int*) b;
}

int main() {
	int n = 5;
	int v[] = { 1, 2, 3, 4, 5 };
	int vRes[5];
	int i = 0, j = 0;
	int acumulado = 0;
	
	for (i = 0; i < n; i++) {
		acumulado = 1;
		
		for (j = 0; j < n; j++) {
			if (i != j) {
				printf("%d %d, ", v[j], acumulado);
				
				acumulado = v[j] * acumulado; 
			}
		}
		printf("\n");
		
		vRes[i] = acumulado;
	}
	
	for (i = 0; i < n; i++) {
		printf("\n%d, ", vRes[i]);
	}
	
	return 0;
}
