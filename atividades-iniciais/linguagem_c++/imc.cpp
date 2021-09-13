#include <iostream>
#include <locale.h>
using namespace std;
/* 
  Escreva um programa que receba como entrada o peso em Kg de uma pessoa e sua altura em m e calcule seu IMC (Índice de Massa Corporal) com a fórmula:
  𝐼𝑀𝐶 = 𝑃𝑒𝑠𝑜 ÷ h*h
*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    float peso=0, altura=0, imc=0;
    string nome;

    cout << "Informe seu nome: ";
    cin >> nome;

    cout << "\nInforme seu peso[kg]: ";
    cin >> peso;

    cout << "\nInforme sua altura[m]: ";
    cin >> altura;
  
    imc=(peso/(altura*altura)); 

    cout << nome << " seu IMC é: " <<imc <<endl;

    return 0;
}