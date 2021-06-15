//Objetivo: Desenvolver um algoritmo que leia o nome e o sexo de uma pessoa.
//Entrada: Nome e Sexo.
//Saída: exibir a mensagem “Ilmo. Sr.”, para o sexo masculino ou “Ilma. Sra.” para o sexo feminino, apresentando o nome logo em seguida.

#include<stdio.h>
#include<locale.h>


int main(){
	setlocale(LC_ALL,"portuguese");
	char sexo; //%c
	char nome[50]; //%s
	float altura, peso;
	
	printf("Por favor informe seu sexo, M para masculino e F para feminino: \n");
	scanf("%c", &sexo);
	printf("Agora, informe o seu nome \n");
	scanf("%s", &nome);
	printf("Informe agora, a sua altura: ");
	scanf("%f", &altura);
	
	     if((sexo =='M')or(sexo == 'm')){
	     printf("Ilmo. Sr. %s" ,nome);
	     peso = (72.5 * altura) - 58;
}
	          else
	             if((sexo =='F')or(sexo == 'f')){
	             printf("Ilma. Sra. %s" ,nome);
	             peso = (62.1 * altura) - 44.7;
}
	               else
	                  if((sexo!='M')or(sexo!='F')){
	                  printf("Dado inválido");
}

	printf("\nO peso ideal de acordo com sua altura é: %f", peso);
	
	return 0;
}
