#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int num1, num2, num3;
    
    printf("Vamos descobrir qual dos 3 valores a serem digitados � o maior");
    printf("\nDigite o primeiro valor: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &num2);
    printf("\nDigite o terceiro valor: ");
    scanf("%d", &num3);
    system("cls");
    
    if((num1>num2)and(num1>num3)){
    	printf("o maior n�mero � o primeiro valor: %d", num1);
	}
		else if((num2>num1)and(num2>num3)){
			printf("o maior n�mero � o segundo valor: %d", num2);
		}
			else if((num3>num1)and(num3>num2)){
				printf("o maior n�mero � o terceiro valor: %d", num3);
			}

	return 0;			
}
