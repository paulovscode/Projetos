#include <iostream>

using namespace std;

int main (){

    float nota1, nota2, nota3, nota4, media;
    char nome [50];

    std::cout << "Qual o nome do aluno: ";
    std::cin >> nome;

    std::cout <<"Digite a primeira nota: ";
    std::cin >> nota1;

    std::cout <<"Digite a segunda nota: ";
    std::cin >> nota2;

    std::cout <<"Digite a terceira nota: ";
    std::cin >> nota3;

    std::cout <<"Digite a quarta nota: ";
    std::cin >> nota4;

    media = nota1 + nota2 + nota3 + nota4/4;

    std::cout << "A nota média do " << nome << " foi de " << media;

}
