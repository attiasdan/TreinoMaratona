#include <iostream>

int soma(int a, int b);

int main(void)
{
	int x, y, z;
	int (*ptr)(int, int);
	
	ptr = soma;//ponteiro recebe endereço da função
	
	x=2;
	y=3;
	z = ptr(x,y);
	
	std::cout << "Soma = " << z;
	
	return 0;
}	

int soma(int a, int b) {
	return a+b;
}
