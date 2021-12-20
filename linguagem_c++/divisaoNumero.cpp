#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;
/*
Escreva um programa que dados dois valores, divide o
primeiro pelo segundo. Como não é possível fazer a
divisão por zero, neste caso deve ser apresentada uma
mensagem adequada.
*/
    int main() {
    float num1=0.0, num2=0.0, div=0.0;

    cout << "\nInforme o primeiro número: ";
    cin >> num1;
    cout << "Informe o segundo número: ";
    cin >> num2;

    div = num1/num2;

    if(num2==0){
        cout << "Não é possível fazer divisão por 0";
    }else{
        cout << endl << num1 << " divido por " << num2 << " é igual a " << div << endl;
    }
}