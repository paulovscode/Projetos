#include <iostream>

using namespace std;

int main(){

    float horas_trabalhadas, ganhos_horas, salario_mes;

    std::cout << "Quantos você ganha por horas trabalhadas? ";
    std::cin >> ganhos_horas;

    std::cout << "Quantas horas você trabalha por mês? ";
    std::cin >> horas_trabalhadas;

    salario_mes = ganhos_horas * horas_trabalhadas;

    std::cout << "Você ganha " << salario_mes << "R$ por mês.";

    return 0;
}