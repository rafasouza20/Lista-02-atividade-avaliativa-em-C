#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int horas , valor, juros , formula;
    
	printf("Quantas horas de internet foram utilizadas: ");
	scanf("%d" ,&horas);
	if(horas <= 20){
		printf("Deve ser pago R$30(valor b�sico) ");
	}
	else{
		formula = horas - 20 ;
			juros = formula * 3; 
				valor = 30 + juros;
					printf("Deve ser pago R$%d", valor);
	}
    

	return 0;
}


