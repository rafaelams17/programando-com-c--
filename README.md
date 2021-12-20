# Programando com C++
Aprendendo de verdade a programar, colocando em praticas projetos esquecidos e simples

## Introdução
Em 1983, Bjarne Stroustrup começou a desenvolver a linguagem com o objetivo de melhorar uma versão do núcleo Unix. A linguagem C++ é uma linguagem de programação baseada na linguagem C, com recursos de alto nível suficientes a ponto de facilitar o desenvolvimento de sistemas complexos.
    
## Características
* Multi-paradigmas, suporta  linguagem imperativa, orientada a objetos e genérica.
* É uma lingauem tipada estaticamente e de propósito geral. 
* É uma linguagem criada para ser tão eficiente quanto o C, porém com novas funções.
* É desenvolvido para fornecer ao programador escolhas, mesmo que seja possível ao programador escolher a opção errada.
* É desenvolvido para ser o mais compatível com C possível, fornecendo transições simples para código C.
* Possui uma biblioteca padrão como o C.

## Aplicações
* Jogos;
* Mercado financeiro;
* Grandes aplicações como navegadores, softwares multímidia e pacotes office;
* Sistemas Operacionais;
* Microcontroladores, enfim.

### Empressas como Facebook, Adobe, Google, Microsoft, etc., utiliza a linguagem C++ para suas aplicações.

Referências:
* [Alura](https://www.alura.com.br/artigos/formacao-linguagem-c-plus-plus)
* [Wikipédia](https://pt.wikipedia.org/wiki/C%2B%2B)

## Praticas
* Verifique se o número dado é par ou impar
```

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
```