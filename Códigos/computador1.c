#include<stdio.h>
#include<windows.h>
#include<MMsystem.h>
#include<conio.c>

int main(){
	char desejo[100], confirmacao[100], caractere;
	int i = 0;
	
	gotoxy(40, 5);
	textcolor(5);
	puts("Ola Mestre, o que deseja?");
	
	gotoxy(40, 6);
	do{
		caractere = getchar();
		desejo[i] = caractere;
		++i;
	}while(caractere != '\n');
	desejo[i - 1] = '\0';
	i = 0;
	
	if(strcmp (desejo, "toca aquela") == 0){
		gotoxy(40, 7);
		puts("Tem certeza mestre?...");
		
		gotoxy(40, 8);
		do{
			caractere = getchar();
			confirmacao[i] = caractere;
			++i;
		}while(caractere != '\n');
		confirmacao[i - 1] = '\0';
		
		gotoxy(40, 9);
		puts("E pra ja mestre...");
			
		if(strcmp (confirmacao, "sim") == 0){
			PlaySound(TEXT("C:\\Users\\Júnior\\Desktop\\aquela.wav"), NULL, SND_SYNC);
		}	
	}

	
	
	return 0;	
}
