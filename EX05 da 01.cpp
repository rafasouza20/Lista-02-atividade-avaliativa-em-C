//limiteDEVELOCIDADE_COMVALIDA��O
//Objetivo: avisar ao motorista apenas se sua velocidade ultrapassar o limite de velocidade de 80km/h
//Entrada: velocidade
//Saida: aviso de limite de velocidade
#include<stdio.h>
#include <cstdlib>
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s

int main(){
	setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
int velocidade;
printf("Digite a velocidade do veiculo: ");
scanf("%d", &velocidade);
	while(velocidade<=0){
		printf("Velocidade inv�lida, digite uma velocidade v�lida: ");
		scanf("%d", &velocidade);
	}
printf("\n");
if(velocidade>80){//se a velocidade for maior que 80, o programa vai imprimir a multa para o motorista
printf("voce foi multado por ultrapassar o limite de velocidade do eixo rodoviario\n");
printf("Limite de velocidade permitida: 80km/h\n");
printf("Velocidade do motorista: %dkm/h \n\n", velocidade);
}
if(velocidade<=80){
printf("O motorista n�o foi multado\n");
printf("Limite de velocidade permitida: 80km/h\n");
printf("Velocidade do motorista: %dkm/h \n\n", velocidade);
}
system("pause");


return 0;
}
