#include<stdio.h>

void tabuada(char tipo);

int main()
{
	char tipo;
	printf("\n..::: TABUADA :::..\n\n");
	
	printf("\n Qual o tipo da opera��o? [+, -, *, /]\n >> ");
	scanf("%c", &tipo);
	
	tabuada(tipo);
//	Para teste:
//	tabuada('+');
//	tabuada('-');
//	tabuada('*');
//	tabuada('/');
	
	return 0;
}

void tabuada(char tipo)
{
	switch (tipo) {
		case '+':
			printf("\n..::: TABUADA DA SOMA :::..\n\n");
			
			for (int i = 0; i <= 10; i++) { //primeiro fator
				for (int j = 0; j <= 10; j++) //segundo fator
					printf(" %d + %d = %d\n", i, j, (i+j) );
				printf("\n");
			}
			break;
		case '-':
			printf("\n..::: TABUADA DA SUBTRA��O :::..\n\n");
			
			for (int i = 0; i <= 10; i++) { //primeiro fator
				for (int j = 0; j <= 10; j++) //segundo fator
					printf(" %d - %d = %d\n", i, j, (i-j) );
				printf("\n");
			}
			break;
		case '*':
			printf("\n..::: TABUADA DA MULTIPLICA��O :::..\n\n");
			
			for (int i = 0; i <= 10; i++) { //primeiro fator
				for (int j = 0; j <= 10; j++) //segundo fator
					printf(" %d * %d = %d\n", i, j, (i*j) );
				printf("\n");
			}
			break;
		case '/':
			printf("\n..::: TABUADA DA DIVIS�O :::..\n\n");
			
			for (int i = 1; i <= 10; i++) { //primeiro fator
				for (int j = 1; j <= 10; j++) //segundo fator
					printf(" %d / %d = %d\n", i, j, (i/j) );
				printf("\n");
			}
			break;
	}
}
