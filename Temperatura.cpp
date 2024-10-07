// Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9)

#include <iostream>

int main(){
    float TFarenheit, TCelcius;

    std::cout << "Digite a temepratura em Farenheit: ";
    std::cin >> TFarenheit;

    TCelcius = (5 * (TFarenheit-32) / 9);

    std::cout << "A temperatura de " << TFarenheit << " F° correspomde a " << TCelcius << " C°";

    return 0;
}