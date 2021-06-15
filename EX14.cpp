#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int num1, num2, num3;
    
    printf("Vamos descobrir qual dos 3 valores a serem digitados é o maior");
    printf("\nDigite o primeiro valor: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &num2);
    printf("\nDigite o terceiro valor: ");
    scanf("%d", &num3);
    system("cls");
    
    if((num1>num2)and(num1>num3)){
    	printf("o maior número é o primeiro valor: %d", num1);
	}
		else if((num2>num1)and(num2>num3)){
			printf("o maior número é o segundo valor: %d", num2);
		}
			else if((num3>num1)and(num3>num2)){
				printf("o maior número é o terceiro valor: %d", num3);
			}

	return 0;			
}
