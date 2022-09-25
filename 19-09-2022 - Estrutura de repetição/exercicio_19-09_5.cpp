#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;


int main() {
  int n,       /* numero a ser verificado             */
      soma,    /* soma dos valores dos divisores de n */
      divisor; /* candidato a divisor de n            */

  cout<<"Digite um numero inteiro positivo: ";
  cin>>n;

  /* inicializacoes */
  soma = 0;

  for (divisor = 1; divisor < n; divisor++){
    if (n % divisor == 0)
      soma = soma + divisor;
  }

  if (n == soma)
    cout<<"O numero e' perfeito\n"<< n;
  else
    cout<<"O numero nao e' perfeito\n"<<n;

  return 0;
}

