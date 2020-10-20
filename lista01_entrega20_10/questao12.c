#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 12
/*
	A professora mandou que joãozinho escrevesse 500 vezes no quadro a frase: 
	“Eu não vou	mais jogar aviõezinhos de papel na sala de aula”.
	
		a) Faça o que a professora pediu utilizando a estrutura for.
		b) Faça o que a professora pediu utilizando a estrutura while
*/

int main()
{
	//declarar variaveis
	int cont;
	//a) for
		for(cont = 1; cont <= 500; cont++) //for que vai do 1 até o 500 mostrando a frase
		{
			printf("%d - ", cont);
			printf("Eu nao vou mais jogar avioezinhos de papel na sala de aula.\n");
			
		}		
	
	//b) while
		cont = 1;
		while(cont <= 500)
		{
			printf("%d - ", cont);
			printf("Eu nao vou mais jogar avioezinhos de papel na sala de aula.\n");
			cont++;
		}
		
	return 0;	
}