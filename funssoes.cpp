#include <iostream>
#include <locale.h>
// Declara��o da Fun��o de Soma
int SomaAUmNumero(int Numero, int NumeroAserSomado)
{
	// fun��o return, usada para criar o processo de soma
	// retornando os valores com o operador '+'
	return Numero + NumeroAserSomado;
}
int main()
{
	setlocale(LC_ALL, ("portuguese"));
	int Numero, NumeroAserSomado;
	std::cout << "Digite um n�mero" << "\n";
	std::cin >> Numero;
	std::cout << "Digite o n�mero a ser somado" << "\n";
	std::cin >> NumeroAserSomado;
	std::cout << "A soma do N�mero: " << Numero << " " << "Ao N�mero: " << NumeroAserSomado << " " << "� igual a: " << SomaAUmNumero(Numero, NumeroAserSomado);
	return 0;
}