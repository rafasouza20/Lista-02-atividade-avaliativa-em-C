#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas

int main(){ // in�cio do programa
	setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
	
	char nome1[50], nome2[50], nome3[50]; //%s
	float altura1, altura2, altura3;
	
		printf("Informe o seu nome: \n");
			scanf("%s", &nome1);
			printf("Informe agora, a sua altura: ");
			scanf("%f", &altura1);
		printf("Informe o seu nome: \n");
			scanf("%s", &nome2);
			printf("Informe agora, a sua altura: ");
			scanf("%f", &altura2);
		printf("Informe o seu nome: \n");
			scanf("%s", &nome3);
			printf("Informe agora, a sua altura: ");
			scanf("%f", &altura3);
			
		 if((altura1>altura2)and(altura1>altura3)){
    	printf("o maior dos 3 � a primeira pessoa: %f", altura1);
	}
		else if((altura2>altura1)and(altura2>altura3)){
			printf("o maior dos 3 � a segunda pessoa: %f", altura2);
		}
			else if((altura3>altura1)and(altura3>altura2)){
				printf("o maior dos 3 � a terceira pessoa: %f", altura3);
			}
	
		return 0;
}
