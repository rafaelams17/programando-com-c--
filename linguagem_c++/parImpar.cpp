#include <iostream>
#include <locale.h>
using namespace std;

int main() {
  setlocale(LC_ALL, "Portuguese");
  int par = 0, impar = 0, cont = 0, num;

  cout << "Digite um número ou -1 para sair: \n";
  cin >> num;
  while(num != -1 && num > 0){
    if((num%2) == 0){
      par++;
      cont++;
    } else{
      impar++;
      cont++;
    } 
    cin >> num;
  }
  cout << "\nForam dados " << par << " numeros pares e " << impar << " numeros impares." <<endl;
  cout << "\nTotal de numeros na sequencia: " << cont <<endl;
  
  return 0;
}