#include <iostream>
#include <locale.h>
using namespace std;

int main() {
  setlocale(LC_ALL, "Portuguese");
  int tam = 10;
  int n = 0, mediaPonderada = 0;
  int p[tam], x[tam];

  cout << "Informe um número inteiro positivo: ";
  cin >> n;
  cout <<endl;

  for(int i = 1;i <= n;i++){
    cout << "Informe um número para p[" << i << "] = ";
    cin >> p[i];
    cout << "Informe um número para x[" << i << "] = ";
    cin >> x[i];
    mediaPonderada += ((p[i]*x[i])/p[i]);
    cout <<endl;
  }
  cout << "A média ponderada: " << mediaPonderada;
}