#include <iostream>

int busca_sequencial(int chave, int *vetor) {
	
	for (int i = 0; i < 5; i++) {
		if (vetor[i] == chave) return i;
	}
	return -1;
}

int main() {
	int vetor[5] = {3,4,2,1,5};
	int achou = -1;
	
	achou = busca_sequencial(10, vetor);
	
	if (achou > -1) printf("Achou na pos = %d\n", achou);
	else printf("Nao achou");	
	
	return 0;
}
