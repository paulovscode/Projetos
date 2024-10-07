#include <iostream>

using namespace std;

int main() {

    float metros, centimetros;

    std::cout << "Digite o valor em metros: ";
    std::cin >> metros;

    centimetros = metros/0.010000;

    std::cout << metros << " metros é igual a " << centimetros << " centimetros.";

return 0;

}