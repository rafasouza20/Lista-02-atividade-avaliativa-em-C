//Objetivo: Efetuar a leitura de um n�mero e apresent�-lo como o seu m�dulo
//Entrada: um valor
//Sa�da: valor absoluto do n�mero fornecido pelo usu�rio


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
	modulo = abs(num1); //fun��o para calcular o valor absoluto
	cout << "O valor absoluto de " << num1 << " � igual a " << modulo;
	
	return 0;
}
