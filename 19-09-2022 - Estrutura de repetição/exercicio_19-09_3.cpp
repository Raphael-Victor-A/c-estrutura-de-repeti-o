#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    float valor = 0.06;
    int y = 0;

    cout<<"O valor fica 0.06 ,ja o pacote com 200 fica: \n\n";

    for(int x = 1; x <= 200; x++){
            if (y == 10){
                cout<<"\n";
                y = 0;
                }
            y++;
        cout<<x<<"="<<x*valor<<"|";
    }
return 0;
}
