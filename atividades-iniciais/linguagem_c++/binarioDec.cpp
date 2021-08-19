#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

void binarioDecimal(int numBinario[], int tam){
    int potencia = 0;
    int decimal = 0;
    for(int i=tam-1;i >= 0;i--){
        decimal += numBinario[i] * pow(2,potencia);
        potencia++;
    }
    cout << decimal;
    /*
    Tem alguma coisa errada!
    */
}
int main(){
    int tamanho;
    int vetor[tamanho], dec;

    cout << "\nInforme o tamanho do vetor: ";
    cin >> tamanho;

    cout << "\nInforme o numero binario: ";
    for (int i = 0; i < tamanho; i++){
        cin >> vetor[i];
    }
    
    cout << "\nO numero decimal e: ";
    binarioDecimal(vetor,tamanho);
    
    return 0;
}