/**************************
* Programa: Treino de uso *
* 	  de número aleatório *
* Autor: Daniel Attias    *
* Data: 19/08/2019        *
***************************/
#include <bits/stdc++.h>

int aleatorio() {
	srand((unsigned)time(NULL));
	return (rand() % 10)+1; //[1;10]
}

int soma(int a, int b);

int main(void)
{
	int x;
	
	x = aleatorio();
	std::cout << "Aleatorio = " << x;
	
	std::cout << "\n\nSoma = " << soma(x,2);
	
	return 0;
}	

int soma(int a, int b) {
	return a+b;
}
