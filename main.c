#include <stdio.h>
#include <stdlib.h>

/* 2 – Armazene em uma matriz 10×5 o resultado de uma prova de alternativas:

a – coluna 0
b – coluna 1
c – coluna 2
d – coluna 3
e – coluna 4
Exemplo da resposta da primeira questão com a alternativa C:

prova[0][0]=0 ; prova[0][1]=0; prova[0][2]=1;prova[0][3]=0;prova[0][4]=0; */



int main(int argc, char *argv[]) {
	
	float gabarito [10][5];
	float resposta [10][5];
	int count, c, total = 0;
	char opcao;
	/*gabarito definido*/
	gabarito [0][1] = 1;
	gabarito [1][1] = 1;
	gabarito [2][3] = 1;
	gabarito [3][4] = 1;
	gabarito [4][4] = 1;
	gabarito [5][0] = 1;
	gabarito [6][3] = 1;
	gabarito [7][0] = 1;
	gabarito [8][4] = 1;
	gabarito [9][2] = 1;
	
	for(count = 0; count < 10; count ++){
		printf("Digite a resposta da %i pergunta:\nSendo A, B, C, D ou E\n", count+1);
		scanf("%s", &opcao);
		switch (opcao){
			case 'A':
				resposta[count-1][0] = 1;
				break;
			case 'B':
				resposta[count-1][1] = 1;
				break;
			case 'C':
				resposta[count-1][2] = 1;
				break;
			case 'D':
				resposta[count-1][3] = 1;
				break;
			case 'E':
				resposta[count-1][4] = 1;
				break;
			}
		}
	for(count = 0; count < 10; count ++){
		for(c = 0; c < 5; c ++){
			if(resposta[count][c] == gabarito [count][c] && gabarito [count][c] == 1){
				total++;
			}		
		}
	}
	printf("A nota final do aluno eh %i", total);
	return 0;
}

