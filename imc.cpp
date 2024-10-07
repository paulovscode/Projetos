#include <iostream>

using namespace std;

int main () {

    float peso, altura, IMC;
    char nome [50];
    int idade;

    std::cout << "Qual o seu nome: ";
    std::cin >> nome;

    std::cout << "Qual o seu peso: ";
    std::cin >> peso;

    std:cout << "Qual a sua altura: ";
    std::cin >> altura;

    std::cout << "Qual a sua idade: ";
    std::cin >> idade;

    std::cout << "Olá " << nome << "!\nVocê tem " << idade << " anos e está pesando " << peso << " KG. Sua altura é de " << altura << " m." << std::endl;

    if (idade >= 18) {
        std::cout << "Você é de maior.\n";
    } else {
        std::cout << "Você é de menor.\n";
    }

    IMC = peso/(altura*altura);

    if (IMC < 18.5) {
        cout << "Classificacao: Abaixo do peso " << endl;
    } else if (IMC >= 18.6 && IMC < 24.9) {
        cout << "Classificacao: Peso normal " << endl;
    } else if (IMC >= 25 && IMC < 29.9) {
        cout << "Classificacao: Sobrepeso " << endl;
    } else {
        cout << "Classificacao: Obesidade " << endl;
}

return 0;
}
