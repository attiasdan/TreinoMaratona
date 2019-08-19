/**
* Programa: Busca Binária
* Autor: Daniel Attias
* Data: 09/08/2019
* Como funciona?
* 	É feita uma busca a partir de um valor chave fornecido num vetor de inteiros ordenados.
*/
#include <iostream>

#define TAM 5

int busca_binaria(int chave, int *vetor)
{
	int beg, mid, end;
	beg = 0;
	mid = (beg+end)/2;
	end = TAM - 1;
	
	while (beg <= end) {
		mid = (beg+end)/2;
		
		if (chave < vetor[mid])
			end = mid - 1;
		else if (chave > vetor[mid])
			beg = mid + 1;
		else return mid;
	}
	return -1;
}

int main() {
	int vetor[TAM] = {1,2,3,4,5};
	int achou = -1;
	
	achou = busca_binaria(4, vetor);
	
	if (achou > -1) printf("Achou na pos = %d\n", achou);
	else printf("Nao achou");	
	
	return 0;
}
