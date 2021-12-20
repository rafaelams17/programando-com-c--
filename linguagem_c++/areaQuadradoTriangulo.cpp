#include <iostream>
#include <locale.h>
using namespace std;
/*
  Faça um programa que leia os lados de um retângulo. Calcule a área do retângulo
  e, caso os lados sejam iguais, imprima a área calculada após a mensagem: “A
  área do quadrado é ”. Se os lados forem diferentes, imprima a área após a
  mensagem : “A área do retângulo é ”.
*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    int a=0, b=0, h=0;

    cout << "\nInforme a base do retângulo: ";
    cin >> b;

    cout << "Informe a altura do retângulo: ";
    cin >> h;
    if(b == h){
        a=b*h;
        cout << "\nAs áreas informadas são iguais! Então é um quadrado!";
        cout << "\nA área do quadrado é: " << a <<endl;
    }
    else{
        a=b*h;
        cout << "\nA área do retangulo é: " << a <<endl;
    }
}