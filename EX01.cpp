//limiteDEVELOCIDADE
//Objetivo: avisar ao motorista apenas se sua velocidade ultrapassar o limite de velocidade de 80km/h
//Entrada: velocidade
//Saida: aviso de limite de velocidade
#include<stdio.h>
#include <cstdlib>
int main(){
int velocidade;
printf("Digite a velocidade do veiculo: ");
scanf("%d", &velocidade);
printf("\n");
if(velocidade>80)//se a velocidade for maior que 80, o programa vai imprimir a multa para o motorista
printf("voce foi multado por ultrapassar o limite de velocidade do eixo rodoviario\n");
printf("Limite de velocidade permitida: 80km/h\n");
printf("Velocidade do motorista: %dkm/h \n\n", velocidade);
system("pause");


return 0;
}
