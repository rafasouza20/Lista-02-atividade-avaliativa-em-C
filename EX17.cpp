#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas

int main(){ // in�cio do programa
	setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
	
	int ano_nasc, ano_atual, idade, dias;
	
	printf("Em que ano voc� nasceu: \n");
	scanf("%d", &ano_nasc);
	printf("Digite o ano atual: \n");
	scanf("%d", &ano_atual);
	idade=ano_atual-ano_nasc;
	dias=idade*365;
	
	printf("\n");
	printf("Voc� viveu aproximadamente %d dias at� agora", dias);
	
	
	return 0;	
}
