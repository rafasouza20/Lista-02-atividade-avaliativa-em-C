//IdentifadorPAROUIMPAR
//Objetivo: Identificar se o n�mero digitado pelo usu�rio � par ou �mpar
//Entrada: Um n�mero
//Sa�da: Emitir mensagem se o n�mero for par ou �mpar

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int num;
	
	printf("Identificador de n�mero �mpar ou par\n");
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	if(num % 2 == 0)
		printf("\nO n�mero aprensentado � par!");
		else printf("O n�mero apresentado � �mpar");
	
	
	return 0;	
}
