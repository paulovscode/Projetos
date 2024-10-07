#include <iostream>

using namespace std;

int main(){
    float lado, area, dobro_area;

    std::cout << "Qual o valor do lado do quadrado: ";
    std::cin >> lado;

    area = lado*lado;

    dobro_area = 2 * area;

    std::cout << "O valor da area do quadrado é de " << area << " metros, e o dobro da aréa é de: " << dobro_area;

    return 0;
}
