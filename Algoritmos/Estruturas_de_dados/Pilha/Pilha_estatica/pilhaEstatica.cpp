/***************************
* Programa: Pilha estática *
* Autor: Daniel Attias     *
* Data: 18/08/2019         *
***************************/
#include <iostream>
#include <stdio.h>
using namespace std;
#define N 10

class Pilha {
	public:
		int top; //índice do elemento do topo
		int tam; //quantidade de elementos que há na lista
		int vetor[N];
		
		Pilha();
		bool push(int chave); //insere no topo
		bool pop(); //remove do topo
		void print(); //exibe toda a pilha
		bool vazia();
		bool cheia();
};

Pilha::Pilha() {
	top = -1;
	tam = 0;
}

bool Pilha::vazia(){return (tam == 0);}
bool Pilha::cheia(){return (tam == N);}

bool Pilha::push(int chave)
{
	if (!cheia()) { //então é possível inserir
		top++;
		vetor[top] = chave;
		tam++; //para indicar que foi inserido mais 1 elemento na lista
		return true; //inserção bem sucedida
	}
	return false;
}
bool Pilha::pop()
{
	if (!vazia()) { //então é possível remover	
		top--;
		tam--;
		return true;
	}
	return false;
}
void Pilha::print()
{
	for (int i = 0; i < tam; i++)
		cout << "vetor[" << i << "]: " << vetor[i] << endl;
}

int main(void) {
	Pilha *p = new Pilha();
	
	/***************************
	* Alguns dados para teste: *
	***************************/
	
	//quero inserir:
	p->push(4);
	p->push(3);
	p->push(2);
	p->push(1);
	
	//quero exibir toda a lista:
	p->print();
	
	cout << "Top: " << p->top << endl;
	cout << "Tam: " << p->tam << endl;
	
	cout << endl;
	
	//quero remover:
	p->pop();
	
	//quero exibir toda a lista:
	p->print();
	
	cout << "Top: " << p->top << endl;
	cout << "Tam: " << p->tam << endl;
	
	return 0;
}
