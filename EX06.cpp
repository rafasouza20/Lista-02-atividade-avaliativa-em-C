//IdentifadorPAROUIMPAR
//Objetivo: Identificar se o número digitado pelo usuário é par ou ímpar
//Entrada: Um número
//Saída: Emitir mensagem se o número for par ou ímpar

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int num;
	
	printf("Identificador de número ímpar ou par\n");
	printf("Digite um número: ");
	scanf("%d", &num);
	if(num % 2 == 0)
		printf("\nO número aprensentado é par!");
		else printf("O número apresentado é ímpar");
	
	
	return 0;	
}
