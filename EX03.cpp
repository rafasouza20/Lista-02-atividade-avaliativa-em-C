//Objetivo: Dado tr�s valores, verificar se eles podem constituir os lados de um tri�ngulo.
//Entrada: tr�s valores.
//Sa�da: Verdadeiro ou falso(se podem ou n�o constituir os lados de um tri�ngulo.

#include<stdio.h>
#include<iostream>
#include<math.h>
#include<locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	int num1, num2, num3;
	cout << "informe 3 valores para verificar se eles podem constituir os lados de um tri�ngulo" << endl;
	cout << "Digite o primeiro valor: " << endl;
	cin >> num1;
	while(num1<=0){
		cout << "Digite um valor v�lido para o primeiro valor: " << endl;
		cin >> num1;
	}
	cout << "Digite o segundo valor: " << endl;
	cin >> num2;
		while(num2<=0){
		cout << "Digite um valor v�lido para o segundo valor: " << endl;
		cin >> num2;
	}
	cout << "Digite o terceiro valor: " << endl;
	cin >> num3;
		while(num3<=0){
		cout << "Digite um valor v�lido para o terceiro valor: " << endl;
		cin >> num3;
	}
	
	if((num1+num2>num3)and(num2+num3>num1)and(num1+num3>num2)) //se a soma de dois lados for maior que o outro lado, ent�o podem constituir os lados de um tri�ngulo.
	cout << "Os valores podem sim constituir os lados de um tri�ngulo" <<endl;
	     else //se n�o, falso.
	     cout << "Falso, os valores n�o podem constituir os lados de um tri�ngulo" <<endl;
	
	return 0;
}
