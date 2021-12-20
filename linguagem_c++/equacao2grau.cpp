#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;
/*
  Faça um programa para Calcular as raízes de uma equação na forma
  𝑎𝑥2+𝑏𝑥+𝑐=0. Note que os valores a, b e c podem ser zero, podem
  dar origem a equações sem solução ou equações de primeiro grau.
  Considere as fórmulas na resolução do problema:
  𝑥 =−𝑏 ± √Δ/2𝑎         Δ = 𝑏^2 − 4𝑎𝑐
*/
int main() {
    int a=0,b=0,c=0,delta=0,x1=0,x2=0;

    cout << "\nEquação do 2º grau";
    cout << "\nInforme a: ";
    cin >> a; 
    cout << "\nInforme b: ";
    cin >> b; 
    cout << "\nInforme c: ";
    cin >> c; 
    
    delta = pow(b,2)-4*a*c;
    cout << "\nDelta = "<< delta;
    
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);

    if(delta > 0){
        cout << "\nDuas raízes reais e diferentes";
        cout << "\nRaíz x1: " << x1;
        cout << "\nRaíz x2: " << x2;
    }else if(delta < 0){
        cout << "\nNão existe valores reais.";
    }else if(delta == 0){
        cout << "\nO delta é igual a zero, logo da origem a equação do primeiro grau, onde as duas raízes reais são iguais!";
        cout << "\nRaízes x1 é igual a " << x1;
        cout << "\nRaízes x2 é igual a " << x2;
    } else{
        cout << "\nValores inválidos.";
    }
}