#include <stdio.h>
#include <ctype.h>

// LISTA DE EXERC�CIOS - LABORAT�RIO DE DESENVOLVIMENTO DE ALGOR�TMO
// ALUNO = JUAN DIEGO MEDEIROS ALENCAR

// QUEST�O 24
/*
	Fazer uma programa que codifica um string pelo m�todo ZENIT-POLAR
	 Z E N I T
	 P O L A R
	
	Ou seja, onde aparece um 'Z' no string de entrada, aparecer� um 'P' na sa�da; e,
	semelhantemente, onde aparece um 'P' no string de entrada, aparecer� um 'Z' na sa�da. 
	
	Isto deve ocorrer para todos os pares em ZENIT-POLAR, mai�sculas e min�sculas. 
	
	As outras letras n�o s�o alteradas.
	
	Por exemplo, o string "Parabens a voce" � codificado para "Zitibols i veco". 
	
	Ao se aplicar duas vezes a transforma��o, obt�m-se o mesmo string, ou seja, a codifica��o de
	"Zitibols i veco" � "Parabens a voce".
*/


int main(){
	char texto[30];
	
	printf("Digite as letras:\n");
	scanf("%[^\n]", texto);
	
	for(int i=0; texto[i] != '\0'; i++){
		char letra = (texto[i]);
		
		if(letra == 'Z'){
		printf("P");
		}
		else if(letra == 'E'){
		printf("O");
		}
		else if(letra == 'N'){
		printf("L");
		}
		else if(letra == 'I'){
		printf("A");
		}
		else if(letra == 'T'){
		printf("R");
		}
		else if(letra == 'z'){
		printf("p");
		}
		else if(letra == 'e'){
		printf("o");
		}
		else if(letra == 'n'){
		printf("l");
		}
		else if(letra == 'i'){
		printf("a");
		}
		else if(letra == 't'){
		printf("r");
		}
		else if(letra == 'P'){
		printf("Z");
		}
		else if(letra == 'O'){
		printf("E");
		}
		else if(letra == 'L'){
		printf("N");
		}
		else if(letra == 'A'){
		printf("I");
		}
		else if(letra == 'R'){
		printf("T");
		}
		else if(letra == 'p'){
		printf("z");
		}
		else if(letra == 'o'){
		printf("e");
		}
		else if(letra == 'l'){
		printf("n");
		}
		else if(letra == 'a'){
		printf("i");
		}
		else if(letra == 'r'){
		printf("t");
		}
		
		else printf("%c", texto[i]);
	}
	return 0;
}
