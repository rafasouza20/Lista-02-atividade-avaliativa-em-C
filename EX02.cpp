//Objetivo: Efetuar a leitura de um número e apresentá-lo como o seu módulo
//Entrada: um valor
//Saída: valor absoluto do número fornecido pelo usuário


#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	int num1;
	int modulo;
	cout << "Digite um numero para calcular o seu valor absoluto:" << endl;
	cin >> num1;
	modulo = abs(num1); //função para calcular o valor absoluto
	cout << "O valor absoluto de " << num1 << " é igual a " << modulo;
	
	return 0;
}
