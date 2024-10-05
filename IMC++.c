#include <stdio.h>

int main (){
//variáveis
float altura, peso, IMC;
char nome[50];
int idade;

//dados pessoais
printf ("Digite seu nome:\n ");
scanf ("%s", nome);

printf ("Digite sua idade:\n ");
scanf ("%d", &idade);

//Kg
printf ("Digite seu peso:\n ");
scanf ("%f", &peso);

//metro ex:(x.xx)
printf ("Digite sua altura:\n ");
scanf ("%f", &altura);

printf ("Ola %s voce tem %d anos e tem %.2f kg e %.2f m de altura.\n " , nome, idade, peso, altura);

if (idade >= 18){
    printf ("Voce e maior de idade!\n");
}

else{
    printf ("Voce e de menor!\n");
}

IMC = peso/(altura*altura);

    if (IMC < 18.5) {
        printf ("Classificacao: Abaixo do peso\n ");
    } else if (IMC >= 18.6 && IMC < 24.9) {
        printf ("Classificacao: Peso normal\n ");
    } else if (IMC >= 25 && IMC < 29.9) {
        printf ("Classificacao: Sobrepeso\n ");
    } else {
        printf ("Classificacao: Obesidade\n ");
    }


return 0;

}
