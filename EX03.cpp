//Objetivo: Dado três valores, verificar se eles podem constituir os lados de um triângulo.
//Entrada: três valores.
//Saída: Verdadeiro ou falso(se podem ou não constituir os lados de um triângulo.

#include<stdio.h>
#include<iostream>
#include<math.h>
#include<locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	int num1, num2, num3;
	cout << "informe 3 valores para verificar se eles podem constituir os lados de um triângulo" << endl;
	cout << "Digite o primeiro valor: " << endl;
	cin >> num1;
	while(num1<=0){
		cout << "Digite um valor válido para o primeiro valor: " << endl;
		cin >> num1;
	}
	cout << "Digite o segundo valor: " << endl;
	cin >> num2;
		while(num2<=0){
		cout << "Digite um valor válido para o segundo valor: " << endl;
		cin >> num2;
	}
	cout << "Digite o terceiro valor: " << endl;
	cin >> num3;
		while(num3<=0){
		cout << "Digite um valor válido para o terceiro valor: " << endl;
		cin >> num3;
	}
	
	if((num1+num2>num3)and(num2+num3>num1)and(num1+num3>num2)) //se a soma de dois lados for maior que o outro lado, então podem constituir os lados de um triângulo.
	cout << "Os valores podem sim constituir os lados de um triângulo" <<endl;
	     else //se não, falso.
	     cout << "Falso, os valores não podem constituir os lados de um triângulo" <<endl;
	
	return 0;
}
