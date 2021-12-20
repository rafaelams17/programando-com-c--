#include <iostream>
#include <locale.h>
#include <cmath>
#include <math.h>
using namespace std;
/*
  Faça um programa para realizar o cálculo da distância
  euclidiana entre dois pontos, sendo que cada ponto é
  definido pelas coordenadas (x, y). A distância pode ser
  calculada pela fórmula: √(𝑥2−𝑥1)2+(𝑦2−𝑦1)2. Além da
  distância, caso os pontos sejam coincidentes, mostre a
  mensagem "Pontos Coincidentes".
*/

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x1=0, x2=0, y1=0, y2=0, distancia=0;

    cout << "Distância euclidiana\n";
    cout << "\nInforme o ponto x1: ";
    cin >> x1;
    cout << "\nInforme o ponto x2: ";
    cin >> x2;
    cout << "\nInforme o ponto y1: ";
    cin >> y1;
    cout << "\nInforme o ponto y2: ";
    cin >> y2;
    
    int x3 = x2-x1;
    int y3 = y2-y1;

    distancia = sqrt(pow((x3),2)+pow((y3),2));

    if(distancia == 0){
        cout << "Pontos coincidentes";
    } else{
        cout << "Distância: " <<distancia <<endl;
    }
}