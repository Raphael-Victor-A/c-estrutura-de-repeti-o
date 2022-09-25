#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    float numero, maior, menor;
    int i = 1;
    while (i <= 15) {
       cout << "Digite um numero real:";
       cin >> numero;
       if (i == 1) {
           maior = numero;
           menor = maior;
       }
       else if (numero > maior) {
           maior = numero;
       }
       else if (numero < menor) {
           menor = numero;
       }
       i++;
    }
    cout << "Menor numero: " << menor << "\nMaior numero: " << maior << endl;
}
