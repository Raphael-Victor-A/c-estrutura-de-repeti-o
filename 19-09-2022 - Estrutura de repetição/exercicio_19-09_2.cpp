#include <iostream>
#include <stdio.h>



using namespace std;

int main() {

    cout << "Por favor, informe a tabuada que voce deseja: " << endl;

    int n = 0;
    cin >> n;

    for(int i = 1; i<=9; i++){

        cout << i << " x " << n << " = " << i*n << endl;
    }


    system("pause");
    return 0;
}
