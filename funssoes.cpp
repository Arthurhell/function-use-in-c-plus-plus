#include <iostream>
#include <locale.h>
// Declaração da Função de Soma
int SomaAUmNumero(int Numero, int NumeroAserSomado)
{
	// função return, usada para criar o processo de soma
	// retornando os valores com o operador '+'
	return Numero + NumeroAserSomado;
}
int main()
{
	setlocale(LC_ALL, ("portuguese"));
	int Numero, NumeroAserSomado;
	std::cout << "Digite um número" << "\n";
	std::cin >> Numero;
	std::cout << "Digite o número a ser somado" << "\n";
	std::cin >> NumeroAserSomado;
	std::cout << "A soma do Número: " << Numero << " " << "Ao Número: " << NumeroAserSomado << " " << "É igual a: " << SomaAUmNumero(Numero, NumeroAserSomado);
	return 0;
}