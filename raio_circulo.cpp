#include <iostream>

using namespace std;

int main(){
    float raio, area;
    float pi = 3.14;

    std::cout << "Qual o valor do raio do circulo? ";
    std::cin >> raio;

    area = pi * (raio*raio);

    std::cout << "A area total do circulo é de " << area << " cm.";

    return 0;
}