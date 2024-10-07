#include <iostream>


int main (){
    float SalarioBruto, IR, INSS, Sindicato, SalarioLiquido;
    float ganhos_horas, horas_trabalhadas;

    std::cout << " Quantos você ganha por horas trabalhadas? ";
    std::cin >> ganhos_horas;

    std::cout << " Quantas horas você trabalha por mês? ";
    std::cin >> horas_trabalhadas;

    SalarioBruto = ganhos_horas * horas_trabalhadas;

    IR = SalarioBruto * (11.0 / 100);
    INSS = SalarioBruto * (8.0 / 100);
    Sindicato = SalarioBruto * (5.0 / 100);

    SalarioLiquido = SalarioBruto - IR - INSS - Sindicato;

    std::cout << " Salario Bruto: " << SalarioBruto << "\n";
    std::cout << " Imposto de Renda: " << IR << "\n";
    std::cout << " INSS: " << INSS << "\n";
    std::cout << " Sindicato: " << Sindicato << "\n";
    std::cout << " Salario Liquido: " << SalarioLiquido << "\n";

    return 0;

}

