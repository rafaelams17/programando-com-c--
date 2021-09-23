#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;
/*
  Escreva um programa que receba a idade de um nadador e mostre sua
  categoria conforme a tabela:
  CATEGORIA   IDADE 
  Infantil    5 a 7
  Juvenil     8 a 10 
  Adolescente 11 a 15
  Adulto      16 a 30 
  Senior     Acima de 30
*/
int main() {
    int idade=0;

    cout << "\nInforme uma idade para informar sua categoria: ";
    cin >> idade; 

    if(idade > 30){
        cout << "\nCategoria - Senior";
    }else if((idade <= 30) && (idade >= 16)){
        cout << "\nCategoria - Adulto";
    }else if((idade <= 15) && (idade >= 11)){
        cout << "\nCategoria - Adolescente";
    }else if((idade <= 10) && (idade >= 8)){
        cout << "\nCategoria - Juvenil";
    }else if((idade <= 7) && (idade >= 5)){
        cout << "\nCategoria - Infantil";
    }else{
        cout << "\nIdade fora da categoria!";
    }
}