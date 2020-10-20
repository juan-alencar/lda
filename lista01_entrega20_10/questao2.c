#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 2 
/*
	Peça ao usuário para digitar um caractere, e em seguida exiba esse caractere na tela.
	a) exiba como caractere (%c).
	b) exiba como inteiro (%d).
	c) exiba como hexadecimal (%x)
*/

int main()
{
	//declarar variaveis
	char caractere;
	
	//solicitar um caractere
	printf("Digite um caractere:\n");
	
	//ler caractere
	scanf("%c", &caractere);

	//exibir como caractere (%c)
	printf("exibindo como caractere: %c\n", caractere);

	//exibir como inteiro (%d)
	printf("exibindo como inteiro: %d\n", caractere);
	
	//exibir como hexadecimal (%x)
	printf("exibindo como hexadecimal: %x\n", caractere);
	
	return 0;
}


