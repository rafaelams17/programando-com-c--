#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    int area = 0, tipo = 0, desconto = 0, custo = 0, custo2 = 0;

    cout << "\nInforme a área a ser pulverizada: ";
    cin >> area;
    cout << "\nInforme o tipo da área a ser pulverizada: ";
    cin >> tipo;

    switch(tipo){
        case 1:
            custo = area*500;
            cout << "\nO custo será de R$ " << custo <<endl;
        break;
        case 2:
            custo = area*1000;
            cout << "\nO custo será de R$ " << custo <<endl;
        break;
        case 3:
            custo = area*1500;
            cout << "\nO custo será de R$ " << custo <<endl;
        break;
        case 4:
            custo = area*2000;
            cout << "\nO custo será de R$ " << custo <<endl;
        break;
        case 5:
            custo = area*3000;
            cout << "\nO custo será de R$ " << custo <<endl;
        break;
        default:
            cout << "Erro!";
        break;
    }
    if(area > 100){
        desconto = custo * 0.05;
        custo2 = custo - desconto;
        cout << "Com desconto de 5%: " << custo2 <<endl;
    } 
    if(custo > 75000){
        desconto = custo*0.10;
        custo2 = custo - desconto;
        cout << "Com desconto de 10%: " << custo2 <<endl;
    }
    else{
        cout << "\nCusto será o mesmo sem descontos." <<endl;
    }
    return 0;
}