//diferencaMAIORPROMENOR
//Objetivo: Ler 2 valores e identificar a diferen�a do maior para o menor
//Entrada: 2 valores
//Sa�da: A diferen�a do maior pelo menor

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int num1, num2, num3;
	
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &num1);
	printf("\nDigite o segundo valor: ");
	scanf("%d", &num2);
	
	if(num1>num2)
	num3=num1-num2;
	
	else
	num3=num2-num1;
	
	printf("\nA diferen�a do maior valor pelo menor �: %d",num3);
	
	return 0;
}
