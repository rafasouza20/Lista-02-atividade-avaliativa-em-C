#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int horas , valor, juros , formula;
    
	printf("Quantas horas de internet foram utilizadas: ");
	scanf("%d" ,&horas);
	if(horas <= 20){
		printf("Deve ser pago R$30(valor básico) ");
	}
	else{
		formula = horas - 20 ;
			juros = formula * 3; 
				valor = 30 + juros;
					printf("Deve ser pago R$%d", valor);
	}
    

	return 0;
}


