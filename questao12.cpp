#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERC�CIOS - LABORAT�RIO DE DESENVOLVIMENTO DE ALGOR�TMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUEST�O 12
/*
	A professora mandou que jo�ozinho escrevesse 500 vezes no quadro a frase: 
	�Eu n�o vou	mais jogar avi�ezinhos de papel na sala de aula�.
	
		a) Fa�a o que a professora pediu utilizando a estrutura for.
		b) Fa�a o que a professora pediu utilizando a estrutura while
*/

int main()
{
	//declarar variaveis
	int cont;
	//a) for
		for(cont = 1; cont <= 500; cont++) //for que vai do 1 at� o 500 mostrando a frase
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
