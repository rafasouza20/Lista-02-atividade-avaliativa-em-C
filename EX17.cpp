#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas

int main(){ // início do programa
	setlocale(LC_ALL,"portuguese"); // definir idioma para português
	
	int ano_nasc, ano_atual, idade, dias;
	
	printf("Em que ano você nasceu: \n");
	scanf("%d", &ano_nasc);
	printf("Digite o ano atual: \n");
	scanf("%d", &ano_atual);
	idade=ano_atual-ano_nasc;
	dias=idade*365;
	
	printf("\n");
	printf("Você viveu aproximadamente %d dias até agora", dias);
	
	
	return 0;	
}
