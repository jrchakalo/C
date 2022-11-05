#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Movel{

    char descricao[50];
    float peso;
    char tipo;

}movel;

void TipoMovel(char pesado[], int *real, int *tems, float *compeso){
	setbuf(stdin, NULL);
	fgets(movel.descricao, 50, stdin);
	setbuf(stdin, NULL);
	scanf("%f", &movel.peso);
	setbuf(stdin, NULL);
	scanf("%c", &movel.tipo);
	setbuf(stdin, NULL);

	if(movel.peso > *compeso){
		*compeso = movel.peso;
		strcpy(pesado, movel.descricao);
	}

	if(strstr (movel.descricao, "Real") != NULL){
		*real= *real + 1;
	}

	if((movel.tipo == 's') && movel.peso > 10.0){
		*tems = *tems + 1;
	}


	movel.descricao[0] = '\0';
}


int main(void){
	int num=0, i, tamstr, tems=0, real=0;
	float compeso=0;
	char pesado[50];

	scanf("%d", &num);

	for(i=0;i<num;i++){
		TipoMovel(pesado, &real, &tems, &compeso);
	}

	pesado[strcspn(pesado, "\n")] = 0;
	printf("Tipo 's' acima de 10Kg: %d\n", tems);
	printf("Termina em \"Real\": %d\n", real);
	printf("Mais pesado: \"%s\"", pesado);

    return 0;
}
