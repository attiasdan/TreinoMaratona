/* PROGRAMA: Calculadora de quatro operações.
 * AUTOR: Daniel Attias.
 * DATA: 15/05/2019.
 */
#include <stdio.h>

int main()
{
	float n1, n2;
	char op;
	
	printf("\n Digite na forma [número operação número]:\n > ");
	scanf("%f %c %f", &n1,&op,&n2);
	
	switch(op) {
		case '+': printf(" = %f\n", n1+n2);
			break;
		case '-': printf(" = %f\n", n1-n2);
			break;
		case '*': printf(" = %f\n", n1*n2);
			break;
		case '/': printf(" = %f\n", n1/n2);
			break;
		default: printf(" Operador inválido.\n");
			break;
	}
	return 0;
}
