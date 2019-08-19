#include <stdio.h>

#define CONVERTE(c) (1.8*c+32)

int main() {
	float v;
	
	printf("\n Digite a temperatura em Celsius:\n > ");
	scanf("%f", &v);
	
	printf("\n Temperatura em Fahrenheit: %f\n", CONVERTE(v));
	return 0;
}
