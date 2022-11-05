#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Individuo{
	char cpf[15];
	char nome[50];
	char sobrenome[50];
	char endereco[70];
	char telefone[20];
}t_pessoa;


int main(void){
	int num, i;
	char linha[250];
	FILE *fp;

	scanf("%d", &num);
	getchar();

	t_pessoa pessoa[num];

	for(i=1; i<=num; i++){
		fgets(pessoa[i].cpf, 15, stdin);
		pessoa[i].cpf[strcspn(pessoa[i].cpf, "\n")] = 0;
		fgets(pessoa[i].nome, 50, stdin);
		pessoa[i].nome[strcspn(pessoa[i].nome, "\n")] = 0;
		fgets(pessoa[i].sobrenome, 50, stdin);
		pessoa[i].sobrenome[strcspn(pessoa[i].sobrenome, "\n")] = 0;
		fgets(pessoa[i].endereco, 70, stdin);
		pessoa[i].endereco[strcspn(pessoa[i].endereco, "\n")] = 0;
		fgets(pessoa[i].telefone, 20, stdin);
		pessoa[i].telefone[strcspn(pessoa[i].telefone, "\n")] = 0;
	}

	fp = fopen("teste.csv", "w");

	if (fp > 0){
		for(i=1; i<=num; i++){
			fprintf(fp, "CPF,nome,snome,endere�o,telefone\n");
			fprintf(fp, "%s,", pessoa[i].cpf);
			fprintf(fp, "%s,", pessoa[i].nome);
			fprintf(fp, "%s,", pessoa[i].sobrenome);
			fprintf(fp, "%s,", pessoa[i].endereco);
			fprintf(fp, "%s\n", pessoa[i].telefone);
		}
		fclose(fp);
	}

	fp = fopen("teste.csv", "r");

	if(fp > 0){
		for(i=0; i<=num; i++){
			fgets(linha, 250, fp);
			printf("%s", linha);
		}
		fclose(fp);
	}

    return 0;
}
