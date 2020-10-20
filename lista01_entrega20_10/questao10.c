#include <stdio.h>
#include <stdlib.h>

// LISTA DE EXERCÍCIOS - LABORATÓRIO DE DESENVOLVIMENTO DE ALGORÍTMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUESTÃO 10
/*
	Leia o ano de nascimento de um nadador, calcule sua idade, e classifique-o em uma das
	categorias:
	 * Infantil A --- de 5 a 7 anos
	 * Infantil B --- de 8 a 10 anos
	 * Juvenil A --- de 11 a 13 anos
	 * Juvenil B --- de 14 a 17 anos
	 * Sênior --- maiores de 17 anos
	Obs.: Utilize como ano atual o ano de 2011.
	O programa deve fornecer uma saída do tipo:
	Nadador de idade “idade” é da categoria “categoria”
*/

int main()
{
	//declarar variaveis
    int ano_nascimento, subtracao, ano_atual;

	//solicitar dados ao usuario
    printf("Digite aqui o ano de seu nascimento:\n");
    scanf("%d", &ano_nascimento);
	
	//calcular idade do nadador
	ano_atual = 2011;
    subtracao = ano_atual - ano_nascimento;

	//verificar a categoria do nadador
    if (subtracao > 17) {
        printf("Nadador de idade %d, categoria Senior", subtracao);
    }
    else if (subtracao >= 14) {
        printf("Nadador de idade %d, categoria Juvenil B", subtracao);
    }
    else if (subtracao >= 11) {
        printf("Nadador de idade %d, categoria Juvenil A", subtracao);
    }
    else if (subtracao >= 8) {
        printf("Nadador de idade %d, categoria Infantil B", subtracao);
    }
    else if (subtracao >= 5) {
        printf("Nadador de idade %d, categoria Infantil A", subtracao);
    }
    else {
        printf("Muito jovem para nadar");
    }
	return 0;
}